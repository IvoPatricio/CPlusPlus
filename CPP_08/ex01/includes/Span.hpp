#ifndef SPAN_HPP
# define SPAN_HPP

#include "limits"
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "exception"

class Span
{
private:
	std::vector<int> Container;
	unsigned int Max_N;
	int Low;
	int High;

public:
	Span();
	Span(unsigned int N);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &src);

	void addNumber(int value);
	void manyNumbers(int add);
	void printNumbers();

	unsigned int shortestSpan();
	unsigned int longestSpan();

	class Exception_span : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Error, the container is FULL");
			}
	};
	class Exception_size : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("\nError, the container is either empty or of size one");
			}
	};
};

#endif
