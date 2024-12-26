cmake_minimum_required(VERSION 3.23.0)

# Setup compiler settings
set(CMAKE_C_STANDARD                11)
set(CMAKE_C_STANDARD_REQUIRED       ON)
set(CMAKE_C_EXTENSIONS              ON)
set(CMAKE_CXX_STANDARD              20)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            ON)
set(CMAKE_COLOR_DIAGNOSTICS         ON)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

include(FetchContent)
# endregion

project(bootloader_f103 VERSION 1.0.0 LANGUAGES C CXX ASM)

add_subdirectory(bootloader)
add_subdirectory(prog)