

#include "gtest/gtest.h"

// Test the external API
#include "AnimalClasses.h"

auto dog = Dog();

TEST(AnimalClassesTestSuite, AnimalClassesNoises)
{
    EXPECT_EQ(dog.make_sound(), "bark!");
}