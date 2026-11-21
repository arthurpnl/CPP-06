#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Please provide a valid argument such as an int/float/double" << std::endl;
        return (0);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}