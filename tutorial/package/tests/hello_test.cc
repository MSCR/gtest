#include <gtest/gtest.h>

// Demostrates some  basic assertions.
TEST(HelloTest, BasicAssertion) {
    // Exoect twi strings not to be equal
    EXPECT_STRNE("hello", "world");
    // Expect equality
    EXPECT_EQ(7*6, 42);
}
