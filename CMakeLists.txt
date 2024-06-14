# https://eax.me/cmake/
cmake_minimum_required(VERSION 3.16) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(MyQSH LANGUAGES CXX)
#find_library(PTHREAD_LIBRARY pthread)
#find_library(PCRE_LIBRARY pcre)
#include_directories(include)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CXX_EXTENSIONS NO)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(${PROJECT_NAME} main.cpp)		# Создает исполняемый файл с именем main
#add_executable(${PROJECT_NAME} main.cpp Fruit.cpp Vegetable.cpp Avocado.cpp)		# Создает исполняемый файл с именем main
									# из исходника main.cpp
#add_executable(main src/Main.cpp src/HttpServer.cpp)
#target_link_libraries(main ${PTHREAD_LIBRARY} ${PCRE_LIBRARY})

#add_subdirectory(tests)
