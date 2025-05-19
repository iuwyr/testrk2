find_package(GTest REQUIRED)
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${GTEST_INCLUDE_DIRS}
)

add_executable(test_printable test_printable.cpp)
target_link_libraries(test_printable
    PRIVATE template_lib GTest::GTest GTest::Main Qt5::Core
)
add_test(NAME PrintableTest COMMAND test_printable)

add_executable(test_fileio test_fileio.cpp)
target_link_libraries(test_fileio
    PRIVATE template_lib GTest::GTest GTest::Main Qt5::Core
)
add_test(NAME FileIOTest COMMAND test_fileio)

add_executable(test_standardio test_standardio.cpp)
target_link_libraries(test_standardio
    PRIVATE template_lib GTest::GTest GTest::Main Qt5::Core
)
add_test(NAME StandardIOTest COMMAND test_standardio)
