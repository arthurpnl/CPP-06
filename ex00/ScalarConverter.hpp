#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>

# define MIN_INT std::numeric_limits<int>::min() // -2147483648
# define MAX_INT std::numeric_limits<int>::max() // 2147483647
# define MIN_FLOAT std::numeric_limits<float>::min() // -3.40282e+38
# define MAX_FLOAT std::numeric_limits<float>::max() // 3.40282e+38
# define MIN_DOUBLE std::numeric_limits<double>::min() // -1.79769e+308
# define MAX_DOUBLE std::numeric_limits<double>::max() // 1.79769e+308

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &other);
        ScalarConverter &operator=(ScalarConverter const &other);
        ~ScalarConverter();
    public:
        static void convert(const std::string &str);
};

enum e_type
{
    INVALID = -1,
    CHAR = 0,
    INT = 1,
    DOUBLE = 2,
    FLOAT = 3,
    PSEUDO = 4
};

static e_type whichType(size_t len, const std::string &str);

#endif