cmake_minimum_required(VERSION 3.27)

function(prefix_clangformat_setup prefix)
    if(NOT CLANGFORMAT_EXECUTABLE)
        set(CLANGFORMAT_EXECUTABLE clang-format)
    endif()

    if(NOT EXISTS ${CLANGFORMAT_EXECUTABLE})
        find_program(clangformat_executable_tmp ${CLANGFORMAT_EXECUTABLE})

        if(clangformat_executable_tmp)
            set(CLANGFORMAT_EXECUTABLE ${clangformat_executable_tmp})
            unset(clangformat_executable_tmp)
        else()
            message(FATAL_ERROR "ClangFormat: ${CLANGFORMAT_EXECUTABLE} not found! Aborting")
        endif()
    endif()

    foreach(clangformat_source ${ARGN})
        get_filename_component(clangformat_source ${clangformat_source} ABSOLUTE)
        string(REGEX REPLACE "[.](c|cpp)$" ".h" clangformat_header ${clangformat_source})

        list(APPEND clangformat_sources ${clangformat_source})

        # if(EXISTS ${clangformat_header})
        # list(APPEND clangformat_sources ${clangformat_header})
        # endif()
    endforeach()

    add_custom_target(${prefix}_clangformat
        COMMAND
        ${CLANGFORMAT_EXECUTABLE}
        -style=file
        -i
        ${clangformat_sources}
        WORKING_DIRECTORY
        ${CMAKE_SOURCE_DIR}
        COMMENT
        "Formatting ${prefix}..."
    )

    add_custom_target(${prefix}_clangformat_check
        COMMAND
        ${CLANGFORMAT_EXECUTABLE}
        -style=file
        -i
        --dry-run
        --Werror
        ${clangformat_sources}
        WORKING_DIRECTORY
        ${CMAKE_SOURCE_DIR}
        COMMENT
        "Checking ${prefix} formatting..."
    )

    set_target_properties(${prefix}_clangformat_check ${prefix}_clangformat PROPERTIES FOLDER tools)
endfunction()

function(target_clangformat_setup target)
    get_target_property(target_interface_sources ${target} INTERFACE_SOURCES)
    get_target_property(target_sources ${target} SOURCES)

    if("${target_sources}" STREQUAL "target_sources-NOTFOUND")
        set(target_sources "")
    endif()

    if("${target_interface_sources}" STREQUAL "target_interface_sources-NOTFOUND")
        set(target_interface_sources "")
    endif()

    prefix_clangformat_setup(${target} ${target_sources} ${target_interface_sources})
endfunction()