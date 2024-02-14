#include "StrongPasswordVerificator.h"

bool StrongPasswordVerificator::IsStrongPassword(std::string password)
{
    LengthVerificator* lengthVerificator = new LengthVerificator;
    UppercaseLetterVerificator* uppercaseLetterVerificator = new UppercaseLetterVerificator;
    LowercaseLetterVerificator* lowercaseLetterVerificator = new LowercaseLetterVerificator;
    DigitVerificator* digitVerificator = new DigitVerificator;
    SpecialCharVerificator* specialCharVerificator = new SpecialCharVerificator;

    lengthVerificator->SetNext(uppercaseLetterVerificator);
    uppercaseLetterVerificator->SetNext(lowercaseLetterVerificator);
    lowercaseLetterVerificator->SetNext(digitVerificator);
    digitVerificator->SetNext(specialCharVerificator);

    return lengthVerificator->Handle(password);
}
