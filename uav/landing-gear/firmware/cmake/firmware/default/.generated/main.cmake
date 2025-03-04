include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(firmware_default_library_list )

# Handle files with suffix (s|as|asm|AS|ASM|As|aS|Asm), for group default-XC8
if(firmware_default_default_XC8_FILE_TYPE_assemble)
add_library(firmware_default_default_XC8_assemble OBJECT ${firmware_default_default_XC8_FILE_TYPE_assemble})
    firmware_default_default_XC8_assemble_rule(firmware_default_default_XC8_assemble)
    list(APPEND firmware_default_library_list "$<TARGET_OBJECTS:firmware_default_default_XC8_assemble>")
endif()

# Handle files with suffix S, for group default-XC8
if(firmware_default_default_XC8_FILE_TYPE_assemblePreprocess)
add_library(firmware_default_default_XC8_assemblePreprocess OBJECT ${firmware_default_default_XC8_FILE_TYPE_assemblePreprocess})
    firmware_default_default_XC8_assemblePreprocess_rule(firmware_default_default_XC8_assemblePreprocess)
    list(APPEND firmware_default_library_list "$<TARGET_OBJECTS:firmware_default_default_XC8_assemblePreprocess>")
endif()

# Handle files with suffix [cC], for group default-XC8
if(firmware_default_default_XC8_FILE_TYPE_compile)
add_library(firmware_default_default_XC8_compile OBJECT ${firmware_default_default_XC8_FILE_TYPE_compile})
    firmware_default_default_XC8_compile_rule(firmware_default_default_XC8_compile)
    list(APPEND firmware_default_library_list "$<TARGET_OBJECTS:firmware_default_default_XC8_compile>")
endif()

add_executable(${firmware_default_image_name} ${firmware_default_library_list})

target_link_libraries(${firmware_default_image_name} PRIVATE ${firmware_default_default_XC8_FILE_TYPE_link})

# Add the link options from the rule file.
firmware_default_link_rule(${firmware_default_image_name})


# Post build target to copy built file to the output directory.
add_custom_command(TARGET ${firmware_default_image_name} POST_BUILD
                    COMMAND ${CMAKE_COMMAND} -E make_directory ${firmware_default_output_dir}
                    COMMAND ${CMAKE_COMMAND} -E copy ${firmware_default_image_name} ${firmware_default_output_dir}/${firmware_default_original_image_name}
                    BYPRODUCTS ${firmware_default_output_dir}/${firmware_default_original_image_name})
