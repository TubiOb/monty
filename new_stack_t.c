#include "monty.h"
#include <stdlib.h>

stack_t *new_stack_t(int n)
{
  stack_t *new_item = malloc(sizeof(stack_t));
  
  if (new_item == NULL)
    return (NULL);
  
  new_item->n = n;
  new_item->prev = NULL;
  new_item->next = NULL;
  
  return (new_item);
}
