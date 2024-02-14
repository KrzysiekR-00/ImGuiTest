#include "UppercaseLetterVerificator.h"

bool UppercaseLetterVerificator::Handle(std::string password) 
{
    if (!std::any_of(password.begin(), password.end(), isupper)) return false;
    else return PasswordVerificationAbstractHandler::Handle(password);
}
