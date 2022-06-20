#include "monty.h"

void (*select_op_code_handler(char *op_code))(stack_t **, unsigned int)
{
    if (strcmp(op_code, "pall") == 0)
        return (op_pall);
               
    if (strcmp(op_code, "pint") == 0)
        return (op_pint);
                    
    if (strcmp(op_code, "pop") == 0)
        return (op_pop);
  
    return (NULL);
}
