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

void printInt(size_t len, const std::string &str)
{
    long l;
    (void)len;
    l = std::strtol(str.c_str(), NULL, 10);
    if (l > MAX_INT || l < MIN_INT)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(l) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(l) << std::endl;
    }
    else
    {
        if (l >= 0 && l <= 127)
        {
            if (std::isprint(l))
                std::cout << "char: " << "'" << static_cast<char>(l) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(l) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(l) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(l) << std::endl;

    }
}

void printDouble(size_t len, const std::string &str)
{
    (void)len;
    (void)str;
    std::cout << "printDouble called" << std::endl;
}

void printFloat(size_t len, const std::string &str)
{
    (void)len;
    (void)str;
    std::cout << "printFloat() called" << std::endl;
}

void printPseudo()
{
    std::cout << "printPseudo() called" << std::endl;
}