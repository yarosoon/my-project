cmake_minimum_required(VERSION 3.4)

# Название проекта
project(My-Project)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавление исполняемого файла
add_executable(MyExecutable task.cpp function.cpp)

enable_testing()

add_test(NAME MyTest
    COMMAND MyExecutable
)