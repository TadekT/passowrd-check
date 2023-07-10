#include "validation.hpp"
#include <algorithm>
#include <iostream>

std::string getErrorMessage(ErrorCode code)
{
    switch (code)
    {
    case ErrorCode::Ok:
        return "Ok\n";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password Needs At Least Nine Characters\n";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password Need At Least One Number\n";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password Needs At Least One Special Character\n";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password Needs At Least One Uppercase Letter\n";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords Do Not Match\n";
    default:
        return "Unknow Error\n";
    }
}

bool doPasswordMatch(std::string const &first, std::string const &secoud)
{
    if (first.compare(secoud) == 0)
    {
        std::cerr<<getErrorMessage(ErrorCode::Ok);
        return true;
    }
    else
    {
        std::cerr<<getErrorMessage(ErrorCode::PasswordsDoNotMatch);
        return false;
    }
}

bool checkPasswordRules(std::string const pass)
{
    if (pass.length() < 9)
    {
        std::cerr<<getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters);
        return false;
    }

    auto hasDigit = std::any_of(pass.begin(), pass.end(), [](unsigned char x)
                                { return std::isdigit(x); });
    if (hasDigit == false)
    {
        std::cerr<<getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber);
        return false;
    }

    auto hasSpecialChar = std::any_of(pass.begin(), pass.end(), [](unsigned char x)
                                      { return std::ispunct(x); });
    if (hasSpecialChar == false)
    {
        std::cerr<<getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
        return false;
    }

    auto hasUpperChar = std::any_of(pass.begin(), pass.end(), [](unsigned char x)
                                    { return std::isupper(x); });
    if (hasUpperChar == false)
    {
        std::cerr<<getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
        return false;
    }

    else
    {
        return true;
    }
}

bool checkPassword(std::string pass, std::string valPass)
{
    if (checkPasswordRules(pass) != true)
    {   
       return false;
    }
    if(doPasswordMatch(pass,valPass)){
        return false;
    }
    
        return true;
     
}