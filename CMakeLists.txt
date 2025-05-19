cmake_minimum_required(VERSION 3.14)
project(Rk2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(template_lib STATIC
    src/printable.cpp
    src/fileio.cpp
    src/standardio.cpp
)

find_package(Qt5Core REQUIRED)
target_link_libraries(template_lib PUBLIC Qt5::Core)

add_executable(app_exec
    app/main.cpp
)
target_link_libraries(app_exec PRIVATE template_lib)

enable_testing()
add_subdirectory(tests)


set(CPACK_GENERATOR  "DEB")
set(CPACK_PACKAGE_NAME "rk2")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "egor.nalivajko@yandex.ru")
include(CPack)
