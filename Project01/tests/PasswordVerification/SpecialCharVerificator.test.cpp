#include <gtest/gtest.h>
#include "../../src/PasswordVerification/SpecialCharVerificator.h"

TEST(SpecialCharVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "*";

	SpecialCharVerificator* verificator = new SpecialCharVerificator;
	auto result = verificator->Handle(password);

	EXPECT_TRUE(result);
}

TEST(SpecialCharVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "A";

	SpecialCharVerificator* verificator = new SpecialCharVerificator;
	auto result = verificator->Handle(password);

	EXPECT_FALSE(result);
}