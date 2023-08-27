#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include "stack"
#include "iostream"

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	using std::stack<T>::c;
public:
	// just declaring the poly stack depending on the Type into a container
	typedef typename std::stack<T>::container_type MutantContainer;
	// so main works with any container type without std::iterator
	typedef typename MutantContainer::iterator iterator;

	MutantStack()
	{
		std::cout << "+MutantStack Default Constructor called" << std::endl;
	};

	~MutantStack()
	{
		std::cout << "-MutantStack Destructor called" << std::endl;
	}

	MutantStack(MutantStack const &src)
	{
		std::cout << "+MutantStack Copy constructor called" << std::endl;
		c = src.c;
	}
	MutantStack &operator=(MutantStack const &src)
	{
		std::cout  <<"+MutantStack Assignment constructor called " << std::endl;
		if (this != &src)
			c = src.c;
		return (*this);
	}

	typename MutantContainer::iterator begin(void)
	{
		return (c.begin());
	};

	typename MutantContainer::iterator end(void)
	{
		return (c.end());
	};

};

#endif
