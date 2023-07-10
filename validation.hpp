#ifndef VALIDATION_HPP
#define VALIDATION_HPP
#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>
enum class ErrorCode{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);
bool doPasswordMatch(std::string const &first ,std::string const &secoud);
bool checkPasswordRules(std::string pass);
bool checkPassword(std::string pass, std::string valPass);
#endif //VALIDATION_HPP