cmake_minimum_required(VERSION 3.27)

if(${PROJECT_NAME}_BUILD_TESTS)
    # GoogleTest
    set(FETCHCONTENT_UPDATES_DISCONNECTED_GoogleTest = ON)
    CPMAddPackage(
        NAME "GoogleTest"
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
    )
endif(${PROJECT_NAME}_BUILD_TESTS)