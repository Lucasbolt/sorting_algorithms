#include "sort.h"

/**
 * check_bubble - checks if the array is well sorted.
 * @array: pointer to int array.
 * @size: size of the array.
 * Return: 0 if array is sorted, else 1.
 */
int check_bubble(int *array, size_t size)
{
	size_t index;

	for (index = 0; index < size - 1; index++)
		if (array[index] > array[index + 1])
			return (1);
	return(0);
}

/**
 * bubble_sort - sorts an array of integers in ascending order.
 * @array: pointer to int array to sort
 * @size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t index = 0;
	int tmp, check = 1;
	if (size == 1)
		return;
	
	while(check == 1)
	{
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
		}
		check = check_bubble(array, size);
	}
}
