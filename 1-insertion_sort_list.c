#include "sort.h"
/**
 * bubble_sort - A bubble sort function
 * @array: The array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;

	for (i = 1; i < n; i++)
	{
		j = i;
		while(j > 0 && (array[j] < array[j - 1]))
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, n);
			}
			j--;
		}
	}
}
