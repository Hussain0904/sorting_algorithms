#include "sort.h"

/**
 *  * create_linked_list - Creates a doubly linked list from an array of integers
 *   *
 *    * @array: Array to convert to a doubly linked list
 *     * @size: Size of the array
 *      *
 *       * Return: Pointer to the first element of the created list. NULL on failure
 *        */
listint_t *create_linked_list(const int *array, size_t size)
{
	    listint_t *linked_list;
	        listint_t *node;
		    int *tmp;

		        linked_list = NULL;
			    while (size--)
				        {
						        node = malloc(sizeof(*node));
							        if (!node)
									            return (NULL);
								        tmp = (int *)&node->n;
									        *tmp = array[size];
										        node->next = linked_list;
											        node->prev = NULL;
												        linked_list = node;
													        if (linked_list->next)
															            linked_list->next->prev = linked_list;
														    }
			        return (linked_list);
}

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	    listint_t *my_linked_list;
	        int my_array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
		    size_t array_size = sizeof(my_array) / sizeof(my_array[0]);

		        my_linked_list = create_linked_list(my_array, array_size);
			    if (!my_linked_list)
				            return (1);

			        printf("Original Linked List: ");
				    print_list(my_linked_list);
				        printf("\n");

					    insertion_sort_list(&my_linked_list);

					        printf("Sorted Linked List: ");
						    print_list(my_linked_list);

						        return (0);
}

