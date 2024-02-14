#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class LowercaseLetterVerificator : public PasswordVerificationAbstractHandler 
{
public:
    bool Handle(std::string password) override;
};