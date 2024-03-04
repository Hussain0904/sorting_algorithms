#include "sort.h"

/**
 *  * bubble_sort - Sorts an array of integers in ascending order
 *   *               using the Bubble sort algorithm.
 *    * @array: The array to be sorted.
 *     * @size: The size of the array.
 *      */
void bubble_sort(int *array, size_t size)
{
	    size_t i, j;
	        int tmp;
		    boolean bubbly;

		        if (array == NULL || size < 2)
				        return;

			    for (i = 0; i < size - 1; i++)
				        {
						        bubbly = FALSE;
							        for (j = 0; j < size - 1 - i; j++)
									        {
											            if (array[j] > array[j + 1])
													                {
																                /* Use 0 and 1 instead of FALSE and TRUE */
																                tmp = array[j];
																		                array[j] = array[j + 1];
																				                array[j + 1] = tmp;
																						                print_array(array, size);
																								                bubbly = TRUE;
																										            }
												            }
								        if (!bubbly)
										            break;
									    }
}

