#include "sort.h"

/**
 *  * insertion_sort_list - Sort a doubly linked list of integers
 *   *                       in ascending order using the Insertion sort algorithm.
 *    * @list: A pointer to the head of the doubly linked list.
 *     *
 *      * Description: Prints the list after each swap.
 *       */
void insertion_sort_list(listint_t **list)
{
	    listint_t *current, *prev, *next;

	        if (list == NULL || *list == NULL || (*list)->next == NULL)
			        return;

		    current = (*list)->next;
		        while (current != NULL)
				    {
					            next = current->next;
						            while (current->prev != NULL && current->n < current->prev->n)
								            {
										                prev = current->prev;
												            current->prev = prev->prev;
													                prev->next = current->next;
															            current->next = prev;
																                if (prev->next != NULL)
																			                prev->next->prev = prev;
																		            else
																				                    *list = current;
																			                prev->prev = current;
																					            if (current->prev != NULL)
																							                    current->prev->next = current;
																						                print_list((const listint_t *)*list);
																								        }
							            current = next;
								        }
}

