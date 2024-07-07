cmake_minimum_required(VERSION 3.14)

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

# # Create a format_all and check_formatting cmake target for all source and header files
# function(setup_clang_format)
# cmake_parse_arguments(SETUP_CLANG_FORMAT
# ""             # options
# "PROJECT_ROOT" # oneValueArgs
# ""             # multiValueArgs
# ${ARGN}
# )

# if(SETUP_CLANG_FORMAT_PROJECT_ROOT)
# set(PROJECT_ROOT ${SETUP_CLANG_FORMAT_PROJECT_ROOT})
# else()
# set(PROJECT_ROOT ${PROJECT_SOURCE_DIR})
# endif()

# if(${PROJECT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
# # Add a target to run Clang Format
# file(GLOB_RECURSE HEADER_FILES_TO_REFORMAT
# ${PROJECT_ROOT}/examples/*.h
# ${PROJECT_ROOT}/include/*.h
# ${PROJECT_ROOT}/src/libraries/*.h
# ${PROJECT_ROOT}/tests/*.h
# )

# file(GLOB_RECURSE SOURCE_FILES_TO_REFORMAT
# ${PROJECT_ROOT}/examples/*.c
# ${PROJECT_ROOT}/examples/*.cpp
# ${PROJECT_ROOT}/src/libraries/*.c
# ${PROJECT_ROOT}/src/libraries/*.cpp
# ${PROJECT_ROOT}/tests/*.c
# ${PROJECT_ROOT}/tests/*.cpp
# )

# # set (EXCLUDE_DIR "/targets/")
# # foreach (TMP_PATH ${HEADER_FILES_TO_REFORMAT})
# #   string (FIND ${TMP_PATH} ${EXCLUDE_DIR} EXCLUDE_DIR_FOUND)
# #   if (NOT ${EXCLUDE_DIR_FOUND} EQUAL -1)
# #       list (REMOVE_ITEM HEADER_FILES_TO_REFORMAT ${TMP_PATH})
# #   endif ()
# # endforeach(TMP_PATH)

# # foreach (TMP_PATH ${SOURCE_FILES_TO_REFORMAT})
# #   string (FIND ${TMP_PATH} ${EXCLUDE_DIR} EXCLUDE_DIR_FOUND)
# #   if (NOT ${EXCLUDE_DIR_FOUND} EQUAL -1)
# #       list (REMOVE_ITEM SOURCE_FILES_TO_REFORMAT ${TMP_PATH})
# #   endif ()
# # endforeach(TMP_PATH)

# add_custom_target(ClangFormat-Format
# COMMAND clang-format -style=file -i ${HEADER_FILES_TO_REFORMAT} ${SOURCE_FILES_TO_REFORMAT}
# WORKING_DIRECTORY
# ${CMAKE_SOURCE_DIR}
# COMMENT
# "Formatting..."
# )

# add_custom_target(ClangFormat-Check
# COMMAND clang-format -style=file --dry-run --Werror ${HEADER_FILES_TO_REFORMAT} ${SOURCE_FILES_TO_REFORMAT}
# WORKING_DIRECTORY
# ${CMAKE_SOURCE_DIR}
# COMMENT
# "Checking Formatting..."
# )

# set_target_properties(ClangFormat-Format ClangFormat-Check PROPERTIES FOLDER tools)
# endif()
# endfunction()
