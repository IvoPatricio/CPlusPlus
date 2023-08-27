#include "./includes/whatever.hpp"

int main(void) 
{
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "---SWAP---\na = " << a << ", b = " << b << std::endl;
    std::cout << "---MIN---\nmin( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "---MAX---\nmax( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << a + b << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}