#include <gtest/gtest.h>
#include "../../src/PasswordVerification/LowercaseLetterVerificator.h"

TEST(LowercaseLetterVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "a";

	LowercaseLetterVerificator* verificator = new LowercaseLetterVerificator;
	auto result = verificator->Handle(password);

	EXPECT_TRUE(result);
}

TEST(LowercaseLetterVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "A";

	LowercaseLetterVerificator* verificator = new LowercaseLetterVerificator;
	auto result = verificator->Handle(password);

	EXPECT_FALSE(result);
}