cmake_minimum_required(VERSION 3.26)

# function to find MSBuild.exe, call with no argument for default install paths
# or provide the Path to the MSBuild location
function(find_msbuild)
    set(MSVS_INSTALL_DIRS "${ARGV1}")

    foreach(year 2022 2019)
        foreach(arch "" " (x86)")
            foreach(kind Professional Community Preview)
                list(
                    APPEND
                    MSVS_INSTALL_DIRS
                    "C:/Program Files${arch}/Microsoft Visual Studio/${year}/${kind}"
                )
            endforeach()
        endforeach()
    endforeach()

    find_program(
        msbuild_path
        NAMES MSBuild
        PATHS ${MSVS_INSTALL_DIRS}
        PATH_SUFFIXES Bin MSBuild/Current/Bin REQUIRED
    )

    if("${msbuild_path}" STREQUAL "msbuild_path-NOTFOUND")
        message(FATAL_ERROR "MSBuild.exe not found!")
    endif()

    set(PARENT_SCOPE msbuild_path ${msbuild_path})
endfunction()
