#include "monty.h"
#include <stdlib.h>

stack_t *new_stack_t(int n)
{
  stack_t *new_item = malloc(sizeof(stack_t));
  
  if (new_item == NULL)
    return (NULL);
  
  new_item->n = n;
  
  return (new_item);
}
