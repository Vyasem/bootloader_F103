# region OpenBLT
set(OPENBLT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/openblt/Target/Source)

file(GLOB OPENBLT_SOURCES
	${OPENBLT_SOURCE_DIR}/*.c
	${OPENBLT_SOURCE_DIR}/ARMCM3_STM32F1/*.c
	${OPENBLT_SOURCE_DIR}/ARMCM3_STM32F1/GCC/*.c
	${OPENBLT_SOURCE_DIR}/addons/cryptomod/*.c
	${OPENBLT_SOURCE_DIR}/addons/csmod/*.c
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Core/*.c
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Drivers/STM32F1xx_HAL_Driver/Src/*.c
)

add_library(openblt STATIC ${OPENBLT_SOURCES})

# Project symbols
target_compile_definitions(openblt PUBLIC
	STM32F103xB
	USE_HAL_DRIVER
	USE_FULL_LL_DRIVER
)

target_include_directories(openblt PUBLIC
	${OPENBLT_SOURCE_DIR}
	${OPENBLT_SOURCE_DIR}/ARMCM3_STM32F1
	${OPENBLT_SOURCE_DIR}/addons/cryptomod
	${OPENBLT_SOURCE_DIR}/addons/csmod
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Core/Inc
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Drivers/STM32F1xx_HAL_Driver/Inc
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Drivers/CMSIS/Device/ST/STM32F1xx/Include
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Drivers/CMSIS/Include
)

#endregion

# region Bootloader
file(GLOB BOOTLOADER_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Core/Src/*.c
	${CMAKE_CURRENT_SOURCE_DIR}/boot/Drivers/STM32F1xx_HAL_Driver/Src/*.c
	${CMAKE_CURRENT_SOURCE_DIR}/boot/*.s
)
list(FILTER BOOTLOADER_SOURCES EXCLUDE REGEX ".+flash_layout\.c")

add_executable(bootloader ${BOOTLOADER_SOURCES})

target_link_libraries(bootloader PRIVATE
	openblt
)

target_compile_options(bootloader PRIVATE
	-Os;-s;
)

target_link_options(bootloader PRIVATE
	-T${CMAKE_CURRENT_SOURCE_DIR}/stm32f103c8tx.ld
)

add_custom_command(TARGET bootloader
	POST_BUILD
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	COMMAND ${CMAKE_OBJCOPY} ARGS -O srec -I elf32-littlearm bootloader bootloader.srec
	COMMAND ${CMAKE_OBJCOPY} ARGS -O ihex -I elf32-littlearm bootloader bootloader.hex
	COMMAND ${CMAKE_OBJCOPY} ARGS -O binary -I elf32-littlearm bootloader bootloader.bin
)
# endregion