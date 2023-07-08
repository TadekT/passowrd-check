#include <gtest/gtest.h>
#include "validation.hpp"

TEST(ABAABA, DUPAUDAP)
{

    EXPECT_TRUE(false);
}
TEST(getErrorMessage, CheckingErrorFunction)
{
    EXPECT_EQ("Ok", getErrorMessage(ErrorCode::Ok));
    EXPECT_EQ("Password Needs At Least Nine Characters", getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters));
    EXPECT_EQ("Password Need At Least One Number", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber));
    EXPECT_EQ("Password Needs At Least One Special Character", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter));
    EXPECT_EQ("Password Needs At Least One Uppercase Letter", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter));
    EXPECT_EQ("Passwords Do Not Match", getErrorMessage(ErrorCode::PasswordsDoNotMatch));
}

TEST(doPasswordMatch, TestingFunctionThatMatchPasswords)
{
    EXPECT_TRUE(doPasswordMatch("TataMama", "TataMama"));
    EXPECT_FALSE(doPasswordMatch("tatamama", "TATAMAMA"));
}

TEST(checkPasswordRules ,AllRulsOK)
{
    EXPECT_TRUE(checkPasswordRules("Toporkiewicz1"));
    EXPECT_FALSE(checkPasswordRules("Topor1"));
    EXPECT_TRUE(checkPasswordRules("torba1ababa"));
}