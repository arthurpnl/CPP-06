#include "ScalarConverter.hpp"

void printChar(size_t len, const std::string &str)
{
    char c;

    if (len == 1)
        c = str[0];
    else
        c = str[1];
    
    if (std::isprint(c))
        std::cout << "char: " << "'" << c << "'" << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
        
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void printInt()
{
    std::cout << "printInt() called" << std::endl;
}

void printDouble()
{
    std::cout << "printDouble called" << std::endl;
}

void printFloat()
{
    std::cout << "printFloat() called" << std::endl;
}

void printPseudo()
{
    std::cout << "printPseudo() called" << std::endl;
}