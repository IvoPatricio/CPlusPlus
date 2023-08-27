#include "./includes/iter.hpp"
#include "stdlib.h"

int main(void) 
{
    char *a;
    int b[5] = {1,5,4,2,3};
    a =  (char *)malloc(sizeof(char) * (3));
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'c';

    ::iter(a, 3, print<char>);
    ::iter(b, 5, print<int>);
    free(a);
    return 0;
}
