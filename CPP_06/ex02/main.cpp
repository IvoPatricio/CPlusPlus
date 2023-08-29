#include "./includes/Base.hpp"

Base *generate(void)
{
	int i;
	std::srand(time(NULL));
	i = std::rand() % 3;

	if (i == 0)
	{
		std::cout << "Randomly instanciated class::Base A" << std::endl;
		return new A;
	}
	else if (i == 1)
	{
		std::cout << "Randomly instanciated class::Base B" << std::endl;
		return new B;
	}
	else if (i == 2)
	{
		std::cout << "Randomly instanciated class::Base C" << std::endl;
		return new C;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Pointer of the object class::Base A: " << p << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Pointer of the object class::Base B: " << p << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Pointer of the object class::Base C: " << p << std::endl;
}

void identify(Base &p)
{
	int BaseA = 0;
    int BaseB = 0;
    int BaseC = 0;

    try
    {
        A& temp = dynamic_cast<A&>(p);
		(void)temp;
    }
    catch (...)
    {
		BaseA = 1;
		try
    	{
    	    B& temp = dynamic_cast<B&>(p);
			(void)temp;
    	}
    	catch (...)
    	{
			BaseB = 1;
			try
    		{
        		C& temp = dynamic_cast<C&>(p);
				(void)temp;
    		}
    		catch (...)
    		{
				BaseC = 1;
    		}
    	}
    }
    if (BaseA == 0)
        std::cout << "Address of the object class::Base A: " << &p << std::endl;
    else if (BaseB == 0)
        std::cout << "Address of the object class::Base B: " << &p << std::endl;
    else if (BaseC == 0)
        std::cout << "Address of the object class::Base C: " << &p << std::endl;
}

int main(void)
{
	Base *del;

	std::srand(time(0));
	del = generate();
	identify(del);
	identify(*del);
	delete del;
}
