#include "./includes/Span.hpp"

int main(void)
{
    Span random(10000);

    try
    {
        random.addNumber(9);
        random.addNumber(1);
        random.addNumber(2);
        random.addNumber(39);
        random.addNumber(15);
        random.addNumber(90);
        //random.manyNumbers(10000);
        //random.printNumbers();
        std::cout << "ShortestSpan: " << random.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " <<random.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

