#include "sort.h"

/**
 *  * cocktail_sort_list - Sorts a doubly linked list of integers in
 *   *                      ascending order using the Cocktail shaker sort algorithm.
 *    * @list: A double pointer to the head of the linked list.
 *     */
void cocktail_sort_list(listint_t **list)
{
	    int swapped = 1;
	        listint_t *current;

		    if (list == NULL || *list == NULL)
			            return;

		        while (swapped == 1)
				    {
					            swapped = 0;

						            for (current = *list; current->next != NULL; current = current->next)
								            {
										                if (current->n > current->next->n)
													            {
															                    swap_nodes(current, current->next, list);
																	                    print_list(*list);
																			                    swapped = 1;
																					                }
												        }

							            if (swapped == 0)
									                break;

								            swapped = 0;

									            for (; current->prev != NULL; current = current->prev)
											            {
													                if (current->n < current->prev->n)
																            {
																		                    swap_nodes(current->prev, current, list);
																				                    print_list(*list);
																						                    swapped = 1;
																								                }
															        }
										        }
}

