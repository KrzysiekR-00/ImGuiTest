#include "SpecialCharVerificator.h"

bool SpecialCharVerificator::Handle(std::string password) 
{
    if (!std::any_of(password.begin(), password.end(), [](unsigned char ch) { return !isalnum(ch); })) return false;
    else return PasswordVerificationAbstractHandler::Handle(password);
}
