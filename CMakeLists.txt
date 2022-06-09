cmake_minimum_required(VERSION 3.20)
project(BSQ C)

file(GLOB BSQ_src
        "*.h"
        "*.c"
        )
file(GLOB BSQ_lib_src
        "include/*.h"
        "lib/my/*.c"
        )

set(CMAKE_C_STANDARD 99)

add_executable(BSQ ${BSQ_src} ${BSQ_lib_src})
