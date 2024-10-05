# CMakeList.txt: проект CMake для lab7; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("lab7")
include_directories(include)
# Добавьте источник в исполняемый файл этого проекта.
add_executable (lab7 
"lab7.cpp" 
"include/figure.h" 
"src/figure.cpp" 
"include/Parallelogramm.h" 
 "src/Parallelogramm.cpp"
"include/Triangle.h" 
"src/Triangle.cpp" 
"include/Circule.h" 
"src/Circule.cpp" 

)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
