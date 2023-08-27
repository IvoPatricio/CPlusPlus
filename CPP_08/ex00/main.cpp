#include "./includes/Easyfind.hpp"

int main(void)
{
    std::vector<int> container(1, 100);
    std::vector<int>::iterator it;
    int myarray [] = { 75 , 50 , 25};

    container.insert(container.begin(), 150);
    container.insert(container.end(), myarray, myarray+3);
    std::cout << "vector numbers:";
    for (it = container.begin(); it < container.end(); it++)
      std::cout << ' ' << *it;
    std::cout << std::endl;
    try
    {
        easyfind(container, 25);
        easyfind(container, 150);
        easyfind(container, 75);
        easyfind(container, 100);
        easyfind(container, 50);
        //easyfind(container, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

