cmake_minimum_required(VERSION 3.27)

project(eFLL VERSION 1.0.0.0 LANGUAGES C CXX ASM)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/CPM.cmake)

if(PROJECT_IS_TOP_LEVEL)
    # Make IDE's prettier
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    # Use ccache if installed for fasting rebuilding
    # https://ccache.dev/ for more info on ccache
    find_program(CCACHE_FOUND ccache)

    if(CCACHE_FOUND)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    endif(CCACHE_FOUND)

    if(CMAKE_TOOLCHAIN_FILE_NAME)
        get_filename_component(CMAKE_TOOLCHAIN_FILE_NAME ${CMAKE_TOOLCHAIN_FILE} NAME_WE)
        set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
            ${CMAKE_SOURCE_DIR}/build/binaries/${CMAKE_TOOLCHAIN_FILE_NAME}/${CMAKE_BUILD_TYPE}
        )
        set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
            ${CMAKE_SOURCE_DIR}/build/binaries/${CMAKE_TOOLCHAIN_FILE_NAME}/${CMAKE_BUILD_TYPE}
        )
    endif()

    # Add helper cmake scripts
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
    include(AddCMakeTools)
    include(clang/ClangFormat)
    include(clang/ClangTidy)

    # List user/build options
    option(${PROJECT_NAME}_BUILD_DOCS "Build documentation" OFF)
    option(${PROJECT_NAME}_BUILD_EXAMPLES "Build example code" OFF)
    option(${PROJECT_NAME}_BUILD_TESTS "Build tests" OFF)
    option(${PROJECT_NAME}_ENABLE_CLANG_TIDY "Enable clang-tidy on project targets" OFF)

    if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
        message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.")
    endif()

    # Have external code download into build/cpm_cache folder
    if(DEFINED ENV{CMAKE_CPM_SOURCE_CACHE})
        # If user has an environment defined location, use that
        set(
            CPM_SOURCE_CACHE
            $ENV{CMAKE_CPM_SOURCE_CACHE}
            CACHE STRING "CPM Cache Location" FORCE
        )
    elseif(CUSTOM_CPM_SOURCE_CACHE)
        # If user provided a custom defined location, use that
        set(
            CPM_SOURCE_CACHE
            ${CUSTOM_CPM_SOURCE_CACHE}
            CACHE STRING "CPM Cache Location" FORCE
        )
    else()
        # Use custom location in build folder if no user input
        set(
            CPM_SOURCE_CACHE
            ${CMAKE_SOURCE_DIR}/build/cpm_cache
            CACHE STRING "CPM Cache Location" FORCE
        )
    endif()
endif(PROJECT_IS_TOP_LEVEL)

add_library(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC include)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 14)

# Add third party/vendor code
add_subdirectory(third_party)

# add source code
add_subdirectory(src)

if(${PROJECT_NAME}_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif(${PROJECT_NAME}_BUILD_EXAMPLES)

if(${PROJECT_NAME}_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif(${PROJECT_NAME}_BUILD_TESTS)

if(${PROJECT_NAME}_BUILD_DOCS)
    include(${CMAKE_CURRENT_LIST_DIR}/cmake/AddCMakeTools.cmake)
    set(BUILD_DOCUMENTATION ON)
    # include(${cmake-scripts_SOURCE_DIR}/doxygen.cmake)

    build_docs(DOXYFILE_PATH ${CMAKE_CURRENT_LIST_DIR}/docs/Doxyfile OUTPUT_DIR ${CMAKE_CURRENT_LIST_DIR}/docs/build)
endif(${PROJECT_NAME}_BUILD_DOCS)
