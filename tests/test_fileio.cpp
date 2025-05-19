#include <gtest/gtest.h>
#include "fileio.h"
#include <type_traits>

TEST(FileIOTest, InheritsPrintable) {
    FileIO f;
    Printable* p = &f;
    // Проверяем корректное приведение
    EXPECT_NE(nullptr, dynamic_cast<FileIO*>(p));
}
