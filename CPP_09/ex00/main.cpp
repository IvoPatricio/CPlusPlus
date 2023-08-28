#include "./includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::string line;
    std::map<std::string, int> m;

    if (argc != 2)
    {
        std::cout << "Error, missing the file" << std::endl;
        return (1);
    }
    std::ifstream inFile;
    inFile.open(argv[1]);
    // check if opening a file failed
    if (inFile.fail())
    {
        std::cout << "Error, openning the file" << std::endl;
        inFile.close();
        exit(1);
    }
    getline(inFile, line);
    getline(inFile, line);

    m[line] = 1;
    if (line.compare("2011-01-03 | 3") == 0)
        std::cout << "equal\n";
    std::map<std::string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        it++;
    }
    while (getline(inFile, line))
    {
        std::cout << line << std::endl;
    }
    inFile.close();
    return (0);
}
