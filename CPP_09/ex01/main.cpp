#include "iostream"
#include "iomanip"
#include "string.h"
#include "cstdlib"
#include "cstring"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "limits.h"
#include "stdint.h"
#include "cctype"

int	main(int argc, char **argv)
{
	std::string b;
	std::string::iterator itBegin;
	int	a[50];

	int i = 0;
	int x = 0;
	if (argc != 2)
		std::cout << "Error" << std::endl;
	else if (!isdigit(argv[1][0]) || !isdigit(argv[1][2]))
		std::cout << "Error" << std::endl;
	itBegin = b.begin();
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			i++;
		if (argv[1][i] == '+' || argv[1][i] == '-' || argv[1][i] == '*' || argv[1][i] == '/')
		{
			b.insert(itBegin, argv[1][i]);
			i++;
			itBegin++;
		}
		if (argv[1][i] == '(' || argv[1][i] == ')')
			std::cout << "Error" << std::endl;
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			a[x] = std::atoi(&argv[1][i]);
			x++;
			i++;
		}
		i++;
	}
	std::cout << a[0] << a[1];
	std::cout << b;
}