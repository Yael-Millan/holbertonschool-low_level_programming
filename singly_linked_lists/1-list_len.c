#include "lists.h"
/**
*
*list_len - find number of elements in list
*
*@head: the number elements
*/
size_t list_len(const list_t *h);
{
size_t elements = 0;
while (h)
{
elements++;
h = h->next;
}
return (elements);
}
