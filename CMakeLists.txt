	# define the minimum cmake version
	cmake_minimum_required(VERSION 3.20)

	# define the project name
	project(basics_in_Cpp VERSION 1.0 LANGUAGES CXX) #Für C basics_in C_ Version 1.0 Languages CXX

	# define the c standard version
	set(CMAKE_CXX_STANDARD 14) #für C dann CMAKE_C_STANDART 11
	set(CMAKE_CXX_STANDARD_REQUIRED True)

	# add some compile options
	add_compile_options(-Wall -Wextra -Werror -pedantic -O0)

	# add an executabel and assign files to it
	add_executable(basics_in_Cpp C++/Unterricht_1.cpp)

	#add Library
	#add_library(library1.a STATIC add.c)

	#add include library
	#target_include_directories(library1.a PUBLIC include)

	#add Library
	#add_library(library2.a SHARED pic.c)

	#add include library
	#target_include_directories(library2.a PUBLIC include)

	#add_executable(exec main.c)

	#target_include_directories(exec PUBLIC include)

	#target_link_libraries(exec PRIVATE library1.a)

	#add_executable(exed main.c)

	#target_include_directories(exec PUBLIC include)

	#target_link_libraries(exec PRIVATE library2.a)
