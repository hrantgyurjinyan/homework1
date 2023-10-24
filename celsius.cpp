#include <iostream>

// (num * 9/5) + 32

int main()
{
    float num_cel;
    std::cout << "Write the temperature in Celsus: ";
    std::cin >> num_cel;
    num_cel = (num_cel * 9/5) + 32;
    std::cout << "The temperature in Fahrenheit is " << num_cel << std::endl;
    return 0;

}