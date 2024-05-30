cmake_minimum_required(VERSION 3.3)
project("Sandbox")

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})

add_subdirectory(engine)

set(SOURCES 
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC engine/include)

target_link_libraries(${PROJECT_NAME} PRIVATE Sentinel::Sentinel)