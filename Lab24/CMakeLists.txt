cmake_minimum_required(VERSION 3.16)

project(Lab24 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab24 main.cpp)

include(GNUInstallDirs)
install(TARGETS Lab24
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
add_subdirectory(Lab24_2)
add_subdirectory(Lab24_3)
