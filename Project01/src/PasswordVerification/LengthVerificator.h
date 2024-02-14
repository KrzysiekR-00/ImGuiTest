#pragma once

#include "PasswordVerificationAbstractHandler.h"

class LengthVerificator : public PasswordVerificationAbstractHandler 
{
public:
    bool Handle(std::string password) override;
};