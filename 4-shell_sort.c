#include "sort.h"

/**
 *  * shell_sort - Sort an array of integers in ascending order
 *   *              using the Shell sort algorithm.
 *    * @array: An array of integers.
 *     * @size: The size of the array.
 *      *
 *       * Description: Prints the array after each swap.
 *        */
void shell_sort(int *array, size_t size)
{
	    size_t gap, i, j;
	        int tmp;

		    if (array == NULL || size < 2)
			            return;

		        for (gap = size / 2; gap > 0; gap /= 2)
				    {
					            for (i = gap; i < size; i++)
							            {
									                for (j = i; j >= gap && array[j - gap] > array[j]; j -= gap)
												            {
														                    tmp = array[j];
																                    array[j] = array[j - gap];
																		                    array[j - gap] = tmp;
																				                }
											        }
						            print_array(array, size);
							        }
}

