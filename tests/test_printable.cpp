#include <gtest/gtest.h>
#include "printable.h"
#include <QString>

class Dummy : public Printable {
public:
    void Print(QString) override {}  // «пустая» реализация
};

TEST(PrintableTest, CanInstantiateSubclass) {
    Dummy d;
    EXPECT_NO_THROW(d.Print("hello"));
}
