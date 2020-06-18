#include "sort.h"
/**
*shell_sort - shell sort
*@array: array to treat
*@size: size of the array
*/
void shell_sort(int *array, size_t size)
{
	size_t h = 1, number;
	size_t i, n;

	while (h < size / 3)
		h = 3 * h + 1;

	while (h > 0)
	{
		for (i = h; i < size; i += h)
		{
			for (n = i; n > 0 && array[n] < array[n - h]; n -= h)
			{
				number = array[n];
				array[n] = array[n - h];
				array[n - h] = number;
			}
		}
		print_array(array, size);
		h = (h - 1) / 3;
	}
}
