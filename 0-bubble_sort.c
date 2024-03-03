#include "sort.h"

/**
 *  * bubble_sort - Sort an array of integers in ascending order
 *   *               using the Bubble sort algorithm.
 *    * @array: An array of integers.
 *     * @size: The size of the array.
 *      *
 *       * Description: Prints the array after each swap.
 *        */
void bubble_sort(int *array, size_t size)
{
	    size_t i, j;
	        int tmp;
		    bool swapped = true;

		        if (array == NULL || size < 2)
				        return;

			    for (i = 0; i < size - 1 && swapped; i++)
				        {
						        swapped = false;
							        for (j = 0; j < size - i - 1; j++)
									        {
											            if (array[j] > array[j + 1])
													                {
																                tmp = array[j];
																		                array[j] = array[j + 1];
																				                array[j + 1] = tmp;
																						                swapped = true;
																								                print_array(array, size);
																										            }
												            }
								    }
}

