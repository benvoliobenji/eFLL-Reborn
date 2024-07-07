cmake_minimum_required(VERSION 3.27)

include(GoogleTest)

set(TEST_DIR ${CMAKE_CURRENT_LIST_DIR})
set(TEST_BIN_DIR ${CMAKE_CURRENT_BINARY_DIR})

# Enable code coverage if using clang, expect llvm-cov to be installed
if(eFLL_ENABLE_CODE_COVERAGE)
    include(${CMAKE_SOURCE_DIR}/cmake/CodeCoverage.cmake)

    # Note: the regex patterns needed below are tricky, and methods that I'd
    # expect to work didnt in llvm-cov For examples of working methods on
    # Windows, reference
    # https://github.com/Microsoft/llvm/blob/master/test/tools/llvm-cov/ignore-filename-regex.test

    # add a ccov-all target that will exclude all test and build files, leaving
    # only our app files to be covered
    add_code_coverage_all_targets(EXCLUDE .*tests[/\\].* .*build[/\\].*)

    # Add our main application to the code coverage
    target_code_coverage(eFLL AUTO ALL)
endif()

function(add_unit_test target_name)
    add_executable(${target_name} ${ARGN})

    target_include_directories(${target_name} PRIVATE ${TEST_DIR})

    target_link_libraries(${target_name} PRIVATE gmock_main eFLL)

    set_target_properties(${target_name} PROPERTIES CXX_STANDARD 23 FOLDER tests)
    gtest_discover_tests(${target_name} EXTRA_ARGS "--gtest_output=xml:${TEST_BIN_DIR}/test-results/")

    if(eFLL_ENABLE_CLANG_TIDY)
        setup_clang_tidy(${target_name})
    endif()

    target_clangformat_setup(${target_name})

    if(eFLL_ENABLE_CODE_COVERAGE)
        # Append each test exe for coverage analysis to test against our main app
        target_code_coverage(${target_name} AUTO ALL)
    endif()
endfunction()

add_unit_test(fuzzy_test FuzzyTest.cpp)
add_unit_test(general_test GeneralTest.cpp)