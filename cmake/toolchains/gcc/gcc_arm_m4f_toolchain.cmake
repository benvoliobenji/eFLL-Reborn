cmake_minimum_required(VERSION 3.23)

add_compile_options(
    "-mcpu=cortex-m4"
    "-mfpu=fpv4-sp-d16"
    "-mfloat-abi=hard"
)

add_link_options(
    "-mcpu=cortex-m4"
    "-mfpu=fpv4-sp-d16"
    "-mfloat-abi=hard"
)

include("${CMAKE_CURRENT_LIST_DIR}/gcc_arm_toolchain.cmake")
