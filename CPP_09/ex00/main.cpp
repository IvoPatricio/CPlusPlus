#include "./includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::fstream file;
    std::string test;
    if (argc != 2)
    {
        std::cout << "Error, missing the file" << std::endl;
        return (1);
    }
    file.open(argv[1], std::ios::in);
    if (!file) 
    {
		std::cout << "Error, openning the file" << std::endl;
        return (1);
    }
    test = std::istream::getline(file);
    std::cout << test << std::endl;
    file.close();
    return (0);
}
