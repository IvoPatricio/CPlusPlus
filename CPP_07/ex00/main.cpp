#include "./includes/whatever.hpp"

int main(void) 
{
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << a + b << std::endl;
    std::cout << "\n-----" << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << "\n-----" << std::endl;

    size_t e = 16;
    size_t f = 1;

    std::cout << "c = " << e << ", d = " << f << std::endl;
    ::swap(e, f);
    std::cout << "c = " << e << ", d = " << f << std::endl;
    std::cout << "min( c, d ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( e, f ) << std::endl;
    return 0;
}