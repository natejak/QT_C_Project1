cmake_minimum_required(VERSION 3.16)

project(my_Qt_C_Project1 LANGUAGES C)

add_executable(my_Qt_C_Project1 main.c)

include(GNUInstallDirs)
install(TARGETS my_Qt_C_Project1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
