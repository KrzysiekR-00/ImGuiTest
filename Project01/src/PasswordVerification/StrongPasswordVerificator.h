#pragma once

#include "LengthVerificator.h"
#include "UppercaseLetterVerificator.h"
#include "LowercaseLetterVerificator.h"
#include "DigitVerificator.h"
#include "SpecialCharVerificator.h"

class StrongPasswordVerificator
{
public:
    bool IsStrongPassword(std::string password)
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
};