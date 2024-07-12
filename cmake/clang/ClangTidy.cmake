cmake_minimum_required(VERSION 3.27)


function(target_setup_clang_tidy target)
    find_program(CLANG_TIDY_EXE NAMES "clang-tidy")

    message("Clang Tidy enabled for ${target}")

    if(CLANG_TIDY_EXE)
        set_target_properties(${target} PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
    else()
        message(WARNING "clang-tidy not found.")
    endif()

    if (EXISTS ${CMAKE_SOURCE_DIR}/.clang-tidy)
        set(CLANG_TIDY_COMMAND
            "${CLANG_TIDY_EXE}" 
            "--config-file=${CMAKE_SOURCE_DIR}/.clang-tidy"
        )

        if(CLANG_TIDY_WERROR)
            message("Clang Tidy Werror enabled for ${target}")
            set_target_properties(${target} PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_EXE} -warnings-as-errors=*")
        endif()
    else()
        set(CLANG_TIDY_COMMAND
            "${CLANG_TIDY_EXE}" 
            "-header-filter=."
            "-checks=*"
        )
    endif()

    if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        set(CLANG_TIDY_COMMAND ${CLANG_TIDY_COMMAND} "--extra-arg=/EHsc;")
        set(CLANG_TIDY_COMMAND ${CLANG_TIDY_COMMAND} "--extra-arg-before=-fms-compatibility-version=19.33.31630")
    endif()
        
    set_target_properties(${target} PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")
endfunction()
