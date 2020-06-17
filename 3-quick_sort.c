#include "sort.h"
/**
 * quick_sort - quick sort
 * @array: thr array to treat
 * @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	_sort(array, 0, size - 1, size);
}

/**
 * _sort - sort using quiq sort
 * @array: array to treat
 * @size: size of the array
 * @low: smallest int
 * @high: biggest int
 */
void _sort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		_sort(array, low, i - 1, size);
		_sort(array, i + 1, high, size);
	}
}

/**
 * partition - partition function
 * @array: array to treat
 * @size: size of the array
 * @high: highest int
 * @low: smallest int
 * Return: int
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i, j, tmp;

	i = (low - 1);
	pivot = array[high];
	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);
}
