cmake_minimum_required(VERSION 3.14)

# Helper function to check against minimum compiler version
function(compiler_check_min_version version)
    if(NOT ${CMAKE_C_COMPILER_VERSION} GREATER_EQUAL "${version}")
        message(FATAL_ERROR "Need to use Compiler v${version} or greater, compiler version is: " ${CMAKE_C_COMPILER_VERSION})
    endif()
endfunction()

# Helper function to check against a compiler version
function(compiler_check_version version)
    if(NOT ${CMAKE_C_COMPILER_VERSION} EQUAL "${version}")
        message(FATAL_ERROR "Need to use Compiler v${version}, compiler version is: " ${CMAKE_C_COMPILER_VERSION})
    endif()
endfunction()

# Helper function to add linker file to target
function(target_add_linker_file target file)
    get_target_property(type ${target} TYPE)
    set(LIB_TYPE PUBLIC)

    if(${type} STREQUAL "INTERFACE_LIBRARY")
        set(LIB_TYPE INTERFACE)
    endif()

    if("${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
        target_link_options(${target} ${LIB_TYPE}
            -T ${file}
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "IAR")
        target_link_options(${target} ${LIB_TYPE}
            --config ${file}
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "ARMClang")
        target_link_options(${target} ${LIB_TYPE}
            --scatter ${file}
        )
    else()
        message(FATAL_ERROR "Unsupported compiler")
    endif()

    set_target_properties(${target} PROPERTIES LINK_DEPENDS ${file})
endfunction()

# Helper function to create .hex file
function(target_create_hex target file new_file)
    if("${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND ${GCC_OBJCOPY} -Oihex ${file} ${new_file}
            COMMENT "Building ${new_file}"
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "IAR")
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND ${IAR_COMPILER_DIR}/ielftool --ihex --verbose ${file} ${new_file}
            COMMENT "Building ${new_file}"
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "ARMClang")
        add_custom_command(TARGET ${EXE_NAME} POST_BUILD
            COMMAND ${CMAKE_OBJCOPY} ${file} --hex --output ${new_file}
            COMMENT "Building ${new_file}"
        )
    else()
        message(FATAL_ERROR "Unsupported compiler")
    endif()
endfunction()

# Helper function to create .bin file
function(target_create_bin target file new_file)
    if("${CMAKE_C_COMPILER_ID}" MATCHES "GNU")
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND ${GCC_OBJCOPY} -Obinary ${file} ${new_file}
            COMMENT "Building ${new_file}"
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "IAR")
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND ${IAR_COMPILER_DIR}/ielftool --bin --verbose ${file} ${new_file}
            COMMENT "Building ${new_file}"
        )
    elseif("${CMAKE_C_COMPILER_ID}" MATCHES "ARMClang")
        add_custom_command(TARGET ${EXE_NAME} POST_BUILD
            COMMAND ${CMAKE_OBJCOPY} ${file} --bin --output ${new_file}
            COMMENT "Building ${new_file}"
        )
    else()
        message(FATAL_ERROR "Unsupported compiler")
    endif()
endfunction()
