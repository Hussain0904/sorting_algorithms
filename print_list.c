#include <stdio.h>
#include "sort.h"

/**
 *  * print_list - Print elements of a doubly linked list.
 *   *
 *    * @list: The list to be printed.
 *     */
void print_list(const listint_t *list)
{
	    int count = 0; // Counter for tracking the number of elements printed

	        while (list)
			    {
				            if (count > 0)
						                printf(", "); // Print a comma before the element (except for the first one)
					            
					            printf("%d", list->n); // Print the current element

						            ++count; // Increment the counter
							            list = list->next; // Move to the next element
								        }

		    printf("\n"); // Print a newline after printing all elements
}

