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

void printInt(const std::string &str)
{
    long l;
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

void printDouble(const std::string &str)
{
    double d;

    d = strtod(str.c_str(), NULL);
    if (d < MIN_DOUBLE || d > MAX_DOUBLE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    std::cout << std::fixed << std::setprecision(1);
    if (d >= 0 && d <= 127)
    {
        if (std::isprint(static_cast<int>(d)))
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
    if (d >= MIN_INT && d <= MAX_INT)
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (d >= MIN_FLOAT && d <= MAX_FLOAT)
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void printFloat(const std::string &str)
{
    double d;
    float f;

    d = strtod(str.c_str(), NULL);
    if (d < MIN_FLOAT || d > MAX_FLOAT)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return ;
    }
    f = static_cast<float>(d);
    std::cout << std::fixed << std::setprecision(1);
    if (f >= 0 && f <= 127)
    {
        if (std::isprint(static_cast<int>(f)))
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
    if (static_cast<double>(f) >= MIN_INT && static_cast<double>(f) <= MAX_INT)
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void printPseudo(const std::string &str)
{
    std::string f;
    std::string d;

    if (str == "nanf" || str == "+inff" || str == "-inff")
    {
        f = str;
        d = str.substr(0, str.length() - 1);
    }
    else
    {
        f = str + "f";
        d = str;
    }
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}
