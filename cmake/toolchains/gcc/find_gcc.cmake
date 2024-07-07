cmake_minimum_required(VERSION 3.23)

function(find_gcc_compiler compiler_path compiler_exe)
    # Search user provided path first.
    find_program(
        ${compiler_path} ${compiler_exe}
        PATHS $ENV{GCC_TOOLCHAIN_PATH}
        PATH_SUFFIXES
        ${CMAKE_SYSTEM_PROCESSOR}/bin
        bin
        NO_DEFAULT_PATH
    )

    # If not then search system paths with hints
    if("${${compiler_path}}" STREQUAL "${compiler_path}-NOTFOUND")
        find_program(
            ${compiler_path} ${compiler_exe}
            HINTS
            "/Program Files/Arm GNU Toolchain arm-none-eabi"
            "/Program Files (x86)/Arm GNU Toolchain arm-none-eabi"
            "/Program Files/GNU Arm Embedded Toolchain"
            "/Program Files (x86)/GNU Arm Embedded Toolchain"
            PATH_SUFFIXES
            bin
        )
    endif()

    if("${${compiler_path}}" STREQUAL "${compiler_path}-NOTFOUND")
        set(GCC_TOOLCHAIN_PATH "" CACHE PATH "Path to search for compiler.")
        message(FATAL_ERROR "Compiler not found, you can specify search path with \"GCC_TOOLCHAIN_PATH\".")
    endif()
endfunction()