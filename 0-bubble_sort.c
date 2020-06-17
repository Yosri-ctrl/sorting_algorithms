#include "sort.h"
/**
*bubble_sort - bubble sort
*@a: the array to treat
*@s: the size of the array
**/
void bubble_sort(int *a, size_t s)
{
	size_t i, j, aux;

	for (i = 0; i < s - 1; i++)
	{
		for (j = 0; j < s - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				aux = a[j];
				a[j] = a[j + 1];
				a[j + 1] = aux;
				print_array(a, s);
			}
		}
	}
}
