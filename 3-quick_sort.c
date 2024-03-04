#include "sort.h"

/**
 *  * swap_ints - Swap two integers in an array.
 *   * @a: The first integer to swap.
 *    * @b: The second integer to swap.
 *     */
void swap_ints(int *a, int *b)
{
	    int tmp;

	        tmp = *a;
		    *a = *b;
		        *b = tmp;
}

/**
 *  * lomuto_partition - Order a subset of an array of integers according to
 *   *                    the Lomuto partition scheme (last element as pivot).
 *    * @array: The array of integers.
 *     * @size: The size of the array.
 *      * @low: The starting index of the subset to order.
 *       * @high: The ending index of the subset to order.
 *        *
 *         * Return: The final partition index.
 *          */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	    int pivot, i, j;

	        pivot = array[high];
		    i = low - 1;

		        for (j = low; j <= high - 1; j++)
				    {
					            if (array[j] < pivot)
							            {
									                i++;
											            swap_ints(&array[i], &array[j]);
												                print_array(array, size);
														        }
						        }

			    swap_ints(&array[i + 1], &array[high]);
			        print_array(array, size);

				    return (i + 1);
}

/**
 *  * lomuto_sort - Implement the quicksort algorithm through recursion.
 *   * @array: An array of integers to sort.
 *    * @size: The size of the array.
 *     * @low: The starting index of the array partition to order.
 *      * @high: The ending index of the array partition to order.
 *       *
 *        * Description: Uses the Lomuto partition scheme.
 *         */
void lomuto_sort(int *array, size_t size, int low, int high)
{
	    int part;

	        if (low < high)
			    {
				            part = lomuto_partition(array, size, low, high);
					            lomuto_sort(array, size, low, part - 1);
						            lomuto_sort(array, size, part + 1, high);
							        }
}

/**
 *  * quick_sort - Sort an array of integers in ascending order using the
 *   *              quicksort algorithm.
 *    * @array: An array of integers.
 *     * @size: The size of the array.
 *      *
 *       * Description: Uses the Lomuto partition scheme. Prints the array
 *        *              after each swap of two elements.
 *         */
void quick_sort(int *array, size_t size)
{
	    if (array == NULL || size < 2)
		            return;

	        lomuto_sort(array, size, 0, size - 1);
}

