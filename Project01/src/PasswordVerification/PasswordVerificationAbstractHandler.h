#pragma once

#include "PasswordVerificationHandler.h"

class PasswordVerificationAbstractHandler : public PasswordVerificationHandler 
{
private:
    PasswordVerificationHandler* next_handler_;
public:
    PasswordVerificationAbstractHandler();
    PasswordVerificationHandler* SetNext(PasswordVerificationHandler* handler) override;
    bool Handle(std::string request) override;
};