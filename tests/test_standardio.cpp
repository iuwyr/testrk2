#include <gtest/gtest.h>
#include "standardio.h"

TEST(StandardIOTest, InheritsPrintable) {
    StandardIO s;
    Printable* p = &s;
    EXPECT_NE(nullptr, dynamic_cast<StandardIO*>(p));
}
