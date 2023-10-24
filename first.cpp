#include <iostream>
#include <string>

int main() 
{
    std::string name;
    std::cout << "What's your name? ";
    std::cin >> name; 

    std::cout << "What's your age? ";
    int age;
    std::cin >> age; 

    std::cout << "Where are you from? ";
    std::string city;
    std::cin >> city;
    std::cout << "Your name is "<< name<< "\n" << "Your age is "<< age << "\n" << "Your university is " << city << std::endl;
    return 0;
}
