#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void run_monty_exec(FILE *fp)
{
  char *line = NULL;
  size_t line_size;
  ssize_t len;
  char *op_code = NULL, *op_code_arg = NULL;
  size_t line_number = 0;
  stack_t *stack = NULL;
  
  /* read a line */
  while ((len = getline(&line, &line_size, fp)) != -1)
  {
    line[len - 1] = '\0';
    line_number += 1;
    
    op_code = strtok(line, " ");
    op_code_arg = strtok(NULL, " ");
    
    if (op_code == NULL)
      continue; /* skip empty line */
    
    /* find the opcode handler */
    if (strcmp(op_code, "push") == 0)
        op_push(&stack, line_number, op_code_arg);
    
    else if (strcmp(op_code, "pall) == 0)
        op_pall(&stack, line_number);
               
    else if (strcmp(op_code, "pint) == 0)
        op_pint(&stack, line_number);
                    
    else if (strcmp(op_code, "pop") == 0)
        op_pop(&stack, line_number);
  }
}
