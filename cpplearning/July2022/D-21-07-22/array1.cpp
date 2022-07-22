#include <iostream>

int main()
{
    int number{35489};

    std::cout << "Number in different bases: " <<std::endl;
    std::cout << std::uppercase;
    std::cout << "Decimal: " << std::dec << number << std::endl;
    std::cout << "Hexadecimal: " << std::hex << number << std::endl;
    std::cout << "Octal: " << std::oct << number << std::endl;

    return 0;
}