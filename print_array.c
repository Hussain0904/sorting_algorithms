#include <stdlib.h>
#include <stdio.h>

/**
 *  * print_array - Print elements of an integer array.
 *   *
 *    * @array: The array to be printed.
 *     * @size: Number of elements in @array.
 *      */
void print_array(const int *array, size_t size)
{
	    size_t index = 0; // Index for iterating through the array

	        while (array && index < size)
			    {
				            if (index > 0)
						                printf(", "); // Print a comma before the element (except for the first one)

					            printf("%d", array[index]); // Print the current element

						            ++index; // Increment the index
							        }

		    printf("\n"); // Print a newline after printing all elements
}

