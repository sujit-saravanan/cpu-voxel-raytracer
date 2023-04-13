cmake_minimum_required(VERSION 3.16)
project(speedrun)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-lglfw -O3 -Ofast -flto -march=native")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../output)

set(PRECOMPILED_HEADER_FILES 
		../src/glad.h
		../src/logger.h
		../src/threadpool.h
		../src/raytracer.h
		../src/khrplatform.h
		../src/gulpp.h
		../src/ray_math.h
		../src/embed.h
		../src/ray_structs.h
		../src/stb_image.h
		../src/config.h
		../src/engine.h)

set(HEADER_FILES )

set(SOURCE_FILES 
		../src/ray_math.cpp
		../src/logger.cpp
		../src/engine.cpp
		../src/main.cpp
		../src/raytracer.cpp
		../src/glad.cpp
		../src/ray_structs.cpp
		${PRECOMPILED_HEADER_FILES}
		${HEADER_FILES})


include_directories(src)
include_directories(src/compiled)

add_executable(speedrun ${SOURCE_FILES})

target_precompile_headers(speedrun PRIVATE ${PRECOMPILED_HEADER_FILES})
