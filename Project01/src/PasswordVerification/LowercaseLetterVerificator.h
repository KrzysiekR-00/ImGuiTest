#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class LowercaseLetterVerificator : public PasswordVerificationAbstractHandler {
public:
    bool Handle(std::string password) override {
        if (!std::any_of(password.begin(), password.end(), islower)) return false;
        else return PasswordVerificationAbstractHandler::Handle(password);
    }
};