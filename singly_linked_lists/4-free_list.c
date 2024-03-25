#include "lists.h"
/**
*free_list - Freees a list
*@head: A pointer list head
*
*/
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
