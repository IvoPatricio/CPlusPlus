#include "./includes/MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    if (mstack.empty())
        std::cout << "Stack is empty" << std::endl;
    mstack.push(5);
    if (!mstack.empty())
        std::cout << "Stack no longer is empty" << std::endl;

    mstack.push(10);
    mstack.push(15);
    mstack.push(20);

    std::cout << "Stack size is: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Stack top is: " << mstack.top() << std::endl;
    std::cout << "Stack size is: " << mstack.size() << std::endl;


    mstack.push(3);
    mstack.push(5);
    mstack.push(0);

    MutantStack<int>::iterator itBegin = mstack.begin();
    MutantStack<int>::iterator itEnd = mstack.end();
    ++itBegin;
    --itBegin;
    while (itBegin != itEnd)
    {
        std::cout << *itBegin << std::endl;
        ++itBegin;
    }

    MutantStack<int> newstack1(mstack);
    itBegin = newstack1.begin();
    itEnd = newstack1.end();
    while (itBegin != itEnd)
    {
        std::cout << *itBegin << std::endl;
        ++itBegin;
    }
    newstack1.push(99);

    MutantStack<int> newstack2;
    newstack2 = newstack1;
    itBegin = newstack2.begin();
    itEnd = newstack2.end();
    while (itBegin != itEnd)
    {
        std::cout << *itBegin << std::endl;
        ++itBegin;
    }

    return 0;
}

