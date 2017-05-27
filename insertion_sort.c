#include <stdio.h>

#define NO_OF_ELEMS 10

void insertion_sort(int[], const int);

int main()
{
	int array[NO_OF_ELEMS] = {12, 87, 43, 21, 79, 102, 54, 94, 255, 99};
	
	return 0;
}

void insertion_sort(int array[], const int length)
{
	for(int i = 0; i < length; i++)
	{
		j = i;
		while(j > 0 && array[j - 1] > array[j])
		{
			int temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j = j - 1;
		}
	}
}
