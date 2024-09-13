cmake_minimum_required(VERSION 3.4)

# Название проекта
project(My-Project)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Скачиваем и добавляем Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Создаем библиотеку my_project из function.cpp
add_library(my_project STATIC function.cpp)
target_include_directories(my_project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Добавление исполняемого файла
add_executable(MyExecutable task.cpp)
target_link_libraries(MyExecutable PUBLIC my_project)

# Добавление тестов
add_executable(test_function test_function.cpp)
target_link_libraries(test_function PRIVATE my_project gtest gtest_main)

# Определение теста
add_test(NAME FunctionTest COMMAND test_function)