// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 


#include <iostream>

int main(){
    std::string user;

    std::cout << "Enter username: " << std::endl;
    std::cin >> user;

    std::cout << std::endl;
    std::cout << "Welcome " << user << std::endl << std::endl;

    return(0);

}