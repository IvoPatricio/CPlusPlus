
#include "limits"
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "exception"
#include "fstream"
#include "array"


void merge(int *leftaray, int *rightarray, int *array)
{

}

void mergeSort(std::array<int, 5> test)
{
	int length = test.size();
	if (length <= 1)
		return;
	
	int middle = length/2;
	int *leftArray = new int[middle];
	int *rightArray = new int[length - middle];

	int i = 0;
	int j = 0;

	for (; i < length; i++)
	{
		if (i < middle)
		{
			leftArray[i] = test.at(i);
		}
		else
		{
			rightArray[i] = test.at(i);
			j++;
		}
	}
	mergeSort(leftArray);
}

int	main()
{
	std::array<int, 5> test = {3, 5, 9, 7, 4};

	mergeSort(test);

	for (int i = 0; i < test.size(); i++)
	{
		std::cout << test.at(i) << " ";
	}
}