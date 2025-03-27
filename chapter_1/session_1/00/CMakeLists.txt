cmake_minimum_required(VERSION 3.10)
project(mi_proyecto)

set(CMAKE_CXX_STANDARD 17) # Especifica el estándar de C++
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agrega el directorio de encabezados
include_directories(include)

# Agrega los archivos fuente
add_executable(mi_proyecto src/main.cpp src/utils.cpp)
