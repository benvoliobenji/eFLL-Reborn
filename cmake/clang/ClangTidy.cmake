cmake_minimum_required(VERSION 3.14)

function(setup_clang_tidy)
    if(EXISTS "${CMAKE_SOURCE_DIR}/.clang-tidy")
        set(CMAKE_CXX_CLANG_TIDY
            clang-tidy
            -header-filter=.
            --config-file=${CMAKE_SOURCE_DIR}/.clang-tidy
            CACHE STRING "ClangTidy arguments" FORCE
        )
    else()
        set(CMAKE_CXX_CLANG_TIDY
            clang-tidy
            -header-filter=.
            -checks=*
            CACHE STRING "ClangTidy arguments" FORCE
        )
    endif()

    if(CLANG_TIDY_WERROR)
        set(CMAKE_CXX_CLANG_TIDY
            ${CMAKE_CXX_CLANG_TIDY}
            --warnings-as-errors=*
        )
    endif()
endfunction()
