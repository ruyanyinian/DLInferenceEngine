project(DLInferenceEngine)
cmake_minimum_required(VERSION 3.10)


add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/DLInferenceEngine/src/SessionBase.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/DLInferenceEngine/include)