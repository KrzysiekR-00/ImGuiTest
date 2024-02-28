#include <gtest/gtest.h>
#include "../../src/PasswordVerification/LengthVerificator.h"

TEST(LengthVerificatorTest, ValidInputReturnsTrue)
{
	std::string password = "12345678901234567890";

	LengthVerificator* verificator = new LengthVerificator;
	auto result = verificator->Handle(password);

	EXPECT_TRUE(result);
}

TEST(LengthVerificatorTest, InvalidInputReturnsFalse)
{
	std::string password = "12345";

	LengthVerificator* verificator = new LengthVerificator;
	auto result = verificator->Handle(password);

	EXPECT_FALSE(result);
}