#include "lists.h"
/**
*
*size_t - find number of elements in list
*
*@head: pointer list h
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
