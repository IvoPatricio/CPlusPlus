#include "../includes/Span.hpp"

Span::Span() : Max_N(0), Low(2147483647), High(0)
{
    std::cout << "+Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int N) : Max_N(N), Low(2147483647), High(0)
{
    std::cout << "+Span Default Constructor called" << std::endl;
}

Span::Span(Span const &src) : Container(src.Container) , Max_N(src.Max_N), Low(src.Low), High(src.High)
{
    std::cout << "+Span Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const &src)
{
    std::cout  <<"+Span Assignment constructor called " << std::endl;
    if (this != &src)
    {
        this->Max_N = src.Max_N;
        this->Container = src.Container;
        this->Low = src.Low;
        this->High = src.High;
    }
    return *this;
}

Span::~Span()
{
    std::cout << "-Span Destructor called" << std::endl;
}

void Span::addNumber(int value)
{
    if (Container.size() >= Max_N)
        throw Exception_span();
    Container.insert(Container.begin(), value);
}

void Span::manyNumbers(int add)
{
    int i = 0;

    srand(time(NULL));
    while (i < add)
    {
        if (Container.size() >= Max_N)
            throw Exception_span();
        const int value = rand();
        Container.insert(Container.begin(), value);
        i++;
    }
}

void Span::printNumbers()
{
    std::vector<int>::iterator it;
    
    for (it = Container.begin(); it < Container.end(); it++)
        std::cout << *it << std::endl;
}

unsigned int Span::shortestSpan()
{
    unsigned int x = 0;
    unsigned int z = 0;

    while (x < Container.size())
    {
        while (z < Container.size())
        {
            if (Container.at(x) >= Container.at(z))
            {
                if (((Container.at(x) - Container.at(z)) < Low) && x != z)
                    Low = Container.at(x) - Container.at(z);
            }
            z++;
        }
        z = 0;
        x++;
    }
    return Low;
}

unsigned int Span::longestSpan()
{
    unsigned int x = 0;
    unsigned int z = 0;

    while (x < Container.size())
    {
        while (z < Container.size())
        {
            if (Container.at(x) >= Container.at(z))
            {
                if (((Container.at(x) - Container.at(z)) > High) && x != z)
                    High = Container.at(x) - Container.at(z);
            }
            z++;
        }
        z = 0;
        x++;
    }
    return High;
}