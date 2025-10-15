// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "What's your name? " << std::flush; //flush - ensures the output has completely been sent to the terminal before waiting for the user input
    std::string str;
    std::cin >> str; //only works for single words

    std::cout << "Hi " << str << "! Lovely to meet you." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
