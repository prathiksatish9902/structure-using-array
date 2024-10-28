cmake_minimum_required(VERSION 3.16)

project(structures_arrays LANGUAGES C)

add_executable(structures_arrays main.c)

include(GNUInstallDirs)
install(TARGETS structures_arrays
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
