file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)

add_library(MQH STATIC ${srcs})
target_include_directories(MQH PUBLIC include)

target_link_libraries(MQH PUBLIC utils OpenMP::OpenMP_CXX)


#cmake_minimum_required (VERSION 2.6)
#project (mqh_lib)

#include_directories("${PROJECT_BINARY_DIR}")

#set(SOURCE_EXE main.cpp)            

#set(SOURCE_LIB mqh.cpp)

#add_library(mqh_test STATIC ${SOURCE_LIB})

#add_executable(main ${SOURCE_EXE})
#SET( CMAKE_CXX_FLAGS  "-Ofast -lrt -DNDEBUG -std=c++11 -DHAVE_CXX0X -openmp -march=native -fpic -w -fopenmp -ftree-vectorize -ftree-vectorizer-verbose=0" )
#target_link_libraries(main mqh_test)  
