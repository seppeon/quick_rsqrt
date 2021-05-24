cmake_minimum_required(VERSION 3.16.0)
project(QuickRSqrt VERSION 0.1.0 LANGUAGES CXX)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)

add_executable(${PROJECT_NAME}Run main.test.cpp)
target_link_libraries(${PROJECT_NAME}Run ${PROJECT_NAME})
set_target_properties(${PROJECT_NAME}Run PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
)