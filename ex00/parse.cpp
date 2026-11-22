#include "ScalarConverter.hpp"

e_type whichType(size_t len, const std::string &str)
{
    if (isChar(len, str))
        return (CHAR);
    return (INVALID);
}

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