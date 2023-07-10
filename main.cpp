#include <iostream>
#include "validation.hpp"



int main()
{

    std::string password;
    std::string repeatedPassword;
    std::cout << "Set new password: ";
    std::cin >> password;
    std::cout << "Repeat password: ";
    std::cin >> repeatedPassword;
    checkPassword(password, repeatedPassword);
 
    /* code */
    return 0;
}
