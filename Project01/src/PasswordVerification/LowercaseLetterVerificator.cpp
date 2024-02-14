#include "LowercaseLetterVerificator.h"

bool LowercaseLetterVerificator::Handle(std::string password) 
{
    if (!std::any_of(password.begin(), password.end(), islower)) return false;
    else return PasswordVerificationAbstractHandler::Handle(password);
}
