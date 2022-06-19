#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_monty_exec(FILE *fp)
{
  char *line = NULL;
  size_t line_size;
  ssize_t len;
  char *op_code = NULL, *op_code_arg = NULL;
  
  /* read a line */
  while ((len = getline(&line, &line_size, fp)) != -1)
  {
    line[len - 1] = '\0';
    
    op_code = strtok(line, " ");
    op_code_arg = strtok(NULL, " ");
    
    /* find the opcode handler */
    
  }
}
