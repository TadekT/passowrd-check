#include "validation.hpp"


std::string getErrorMessage(ErrorCode code){
    switch(code){
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password Needs At Least Nine Characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password Need At Least One Number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password Needs At Least One Special Character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password Needs At Least One Uppercase Letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords Do Not Match";
        default : return "Unknow Error";
    }
}