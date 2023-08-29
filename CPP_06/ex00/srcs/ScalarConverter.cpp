#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "+ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    std::cout << "+ScalarConverter Copy constructor called" << std::endl;
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    std::cout  <<"+ScalarConverter Assignment constructor called" << std::endl;
    if (this != &src)
        *this = src;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "-ScalarConverter Destructor called" << std::endl;
}

void ScalarConverter::Convert(std::string const str)
{
    int     i = 0;
    int     check_float = 0;
    int     check_dot = 0;
    char    *pend;
    char    char1 = '\0';
    int     int1 = 0;
    float   float1 = 0.0;
    double  double1 = 0.0;
    std::string result;
    
    std::string infinite[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    while (i < 6)
    {
        if (str == infinite[i])
        {
            std::cout << infinite[i] << "\n" << std::endl;
            std::cout << "char:impossible" << std::endl;
            std::cout << "int:impossible" << std::endl;
            if (str == "+inff" || str == "-inff" || str == "nanf")
                std::cout << "float:" << str << std::endl;
            else
                std::cout << "float:" << str << "f" << std::endl;
            if (str == "+inff" || str == "-inff" || str == "nanf")
                std::cout << "double:" << infinite[i].substr(0, infinite[i].size() - 1) << std::endl;
            else
                std::cout << "double:" << str << std::endl;
            exit(1);
        }
        i++;
    }
    if (str.size() == 1 && !isdigit(str[0]))
    {
        std::cout << "\n---CHAR---\n" << std::endl;
        char1 = str.c_str()[0];
        int1 = static_cast<int>(char1);
        float1 = static_cast<float>(char1);
        double1 = static_cast<double>(char1);
    }
    else
    {
        if (str[str.size() - 1] == 'f')
            check_float++;
        else
        {
            for (std::string::size_type x = 0; x < str.size(); x++)
            {
                if (str[x] == '.')
                    check_dot++;
            }
        }
        if (check_float == 1)
        {
            std::cout << "\n---FLOAT---\n" << std::endl;
            float1 = std::strtof(str.c_str(), &pend);
            int1 = static_cast<int>(float1);
            char1 = static_cast<char>(float1);
            double1 = static_cast<double>(float1);
        }
        else if (check_dot == 1)
        {
            std::cout << "\n---DOUBLE---\n" << std::endl;
            double1 = std::strtod(str.c_str(), &pend);
            int1 = static_cast<int>(double1);
            char1 = static_cast<char>(double1);
            float1 = static_cast<float>(double1);
        }
        else if (check_float == 0 && check_dot == 0)
        {
            float1 = std::strtof(str.c_str(), &pend);
            if (float1 > 2147483648 || float1 < INT32_MIN)
            {
                std::cout << "\n---(OVERFLOW-INT)---\n" << std::endl;
                int1 = static_cast<int>(float1);
                char1 = static_cast<char>(float1);
                double1 = static_cast<double>(float1);
            }
            else
            {
                std::cout << "\n---INT---\n" << std::endl;
                int1 = std::atoi(str.c_str());
                char1 = static_cast<char>(int1);
                float1 = static_cast<float>(int1);
                double1 = static_cast<double>(int1);
            }
        }
    }
    if (std::isprint(char1)) 
	{
	    result = "'";
	    result += char1;
	    result += "'";
	} 
	else
        result = "Non displayable";
    std::cout << "char:" << result << std::endl;
    std::cout << "int:" << int1 << std::endl;
    std::cout << "float:" << std::fixed << std::setprecision(1) << float1 << "f" << std::endl;
    std::cout << "double:" << std::fixed << std::setprecision(1) << double1 << std::endl;
}
