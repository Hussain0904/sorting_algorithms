#include <stdio.h>
#include "sort.h"

/**
 *  * main - Entry point
 *   * Return: Always 0
 *    */
int main(void)
{
	    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	        size_t size = sizeof(array) / sizeof(array[0]);

		    printf("Original array: ");
		        print_array(array, size);

			    printf("\nSorting...\n");
			        bubble_sort(array, size);

				    printf("\nSorted array: ");
				        print_array(array, size);

					    return (0);
}

