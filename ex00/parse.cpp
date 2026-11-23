#include "ScalarConverter.hpp"

int isChar(size_t len, const std::string &str)
{
    if (len == 1)
    {
        if (!isdigit(str[0]))
            return (1);
    }
    else if (len == 3)
    {
        if (str[0] == '\'' && str[2] == '\'')
            return (1);
    }
    return (0);
}

int isInt(size_t len, const std::string &str)
{
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    if (i == len)
        return (0);
    while(i < len)
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int isDouble(size_t len, const std::string &str)
{
    size_t i = 0;
    int dot = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    if(str[i] == '.' || str[len-1] == '.')
        return (0);
    while(i < len)
    {
        if (!isdigit(str[i]) && str[i] != '.')
            return (0);
        else if(str[i] == '.')
            dot++;
        i++;
    }
    if (dot == 1)
        return (1);
    return (0);
}

int isFloat(size_t len, const std::string &str)
{
    if (isDouble(len - 1, str) && str[len-1] == 'f')
        return (1);
    return(0);
}

e_type whichType(size_t len, const std::string &str)
{
    if (len == 0)
        return (INVALID);
    if (isChar(len, str))
        return (CHAR);
    if (isInt(len, str))
        return (INT);
    if (isDouble(len, str))
        return (DOUBLE);
    if (isFloat(len, str))
        return (FLOAT);
    return (INVALID);
}