#include "sort.h"
/**
*bubble_sort - bubble sort
*@a: the array to treat
*@size: size of the array
**/
void bubble_sort(int *a, size_t size)
{
	int i = 1, aux;
	size_t j;
if (!a)
	return;
while (i)
{
	i = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
			{

				aux = a[j];
				a[j] = a[j + 1];
				a[j + 1] = aux;
				i = 1;
				print_array(a, size);
			}

		}
	}
}
