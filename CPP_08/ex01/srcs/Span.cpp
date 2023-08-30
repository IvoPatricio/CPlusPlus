#include "../includes/Span.hpp"

Span::Span() : Container(), Max_N(0), Low(2147483647), High(0)
{
    std::cout << "+Span Default Constructor called" << std::endl;
}

Span::Span(unsigned int N) : Container(), Max_N(N), Low(2147483647), High(0)
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
    Container.insert(Container.end(), value);
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
    std::vector<int>::iterator begin1 = Container.begin();
    std::vector<int>::iterator begin2 = Container.begin();
    std::vector<int>::iterator end = Container.end();

    if (Container.size() <= 1)
        throw Exception_size();
    while (begin1 != end)
    {
        while (begin2 != end)
        {
            unsigned int i1 = begin1 - Container.begin();
            unsigned int i2 = begin2 - Container.begin();
            if (Container.at(i1) >= Container.at(i2))
            {
                if (((Container.at(i1) - Container.at(i2)) < Low) && i1 != i2)
                    Low = Container.at(i1) - Container.at(i2);
            }
            begin2++;
        }
        begin2 = Container.begin();
        begin1++;
    }
    return Low;
}

unsigned int Span::longestSpan()
{
    if (Container.size() <= 1)
        throw Exception_size();
    std::vector<int>::iterator MaxValue;
    std::vector<int>::iterator MinValue;

    MaxValue = (std::max_element(Container.begin(), Container.end()));
    MinValue = (std::min_element(Container.begin(), Container.end()));
    int minV = *MinValue;
    int maxV = *MaxValue;
    while (minV < maxV)
    {
        minV++;
        High++;
    }
    return High;
}