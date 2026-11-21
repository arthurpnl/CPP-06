#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constructor called !" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
    (void)other;
    std::cout << "ScalarConverter copy constructor called !" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string &str)
{
    size_t len = str.length();
    e_type type = whichType(len, str);

    switch(type)
    {
        case CHAR;
            printChar();
        case INT;
            printInt();
            break;
        case DOUBLE;
            printDouble();
            break;
        case FLOAT;
            printFloat();
            break;
        case PSEUDO;
            printPseudo();
            break;
        case INVALID;
            std::cout << "Invalid argument" << std::endl;
            break;
    }

}