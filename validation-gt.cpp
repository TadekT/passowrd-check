#include <gtest/gtest.h>
#include "validation.hpp"

TEST(ABAABA, DUPAUDAP)
{
    EXPECT_TRUE(false);
}
TEST(getErrorMessage, CheckingErrorFunction)
{
    EXPECT_EQ("Ok\n", getErrorMessage(ErrorCode::Ok));
    EXPECT_EQ("Password Needs At Least Nine Characters\n", getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters));
    EXPECT_EQ("Password Need At Least One Number\n", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber));
    EXPECT_EQ("Password Needs At Least One Special Character\n", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter));
    EXPECT_EQ("Password Needs At Least One Uppercase Letter\n", getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter));
    EXPECT_EQ("Passwords Do Not Match\n", getErrorMessage(ErrorCode::PasswordsDoNotMatch));
}

TEST(doPasswordMatch, TestingFunctionThatMatchPasswords)
{
    EXPECT_TRUE(doPasswordMatch("TataMama", "TataMama"));
    EXPECT_FALSE(doPasswordMatch("tatamama", "TATAMAMA"));
}

TEST(checkPasswordRules ,AllRulsOK)
{
    EXPECT_TRUE(checkPasswordRules("To@porkiewicz1"));
    EXPECT_FALSE(checkPasswordRules("Topor1"));
    EXPECT_TRUE(checkPasswordRules("T!orba1ababa"));
}