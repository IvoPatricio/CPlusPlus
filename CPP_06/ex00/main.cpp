#include "./includes/ScalarConverter.hpp"

/*
int main(int argc, char **argv)
{
    if (argc == 2)
        ScalarConverter::Convert(argv[1]);
    return (0);
}*/

int main(void)
{
    std::string arg;
    int i = 0;
    int x = 0;

    std::cout << "Insert Valid Value: \n";
    std::cin >> arg;
    ScalarConverter::Convert(arg.c_str());
    return 0;
}
