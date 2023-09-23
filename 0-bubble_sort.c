#include "sort.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	bool modified;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < (int) size - 1; i++){
		modified = false;
		for (j = 0; j < (int) size - i - 1; j++){
			if (array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				modified = true;
			}
		}
		if (modified == false)
			break;
	}
}
