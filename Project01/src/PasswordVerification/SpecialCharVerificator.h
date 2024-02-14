#pragma once

#include "PasswordVerificationAbstractHandler.h"
#include <algorithm>

class SpecialCharVerificator : public PasswordVerificationAbstractHandler {
public:
    bool Handle(std::string password) override {
        if (!std::any_of(password.begin(), password.end(), [](unsigned char ch) { return !isalnum(ch); })) return false;
        else return PasswordVerificationAbstractHandler::Handle(password);
    }
};