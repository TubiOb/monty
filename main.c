#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argc)
{
  FILE *fp = NULL;
  
  /* no file provided */
  if (argc != 2)
  {
    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
  }
  
  /* open a file */
  fp = fopen()argv[1], "r");
  
  /* can't open the file */
  if (fp == NULL)
  {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  
  /* execute bytecode */
  run_monty_exec(fp);
  
  /* close gthe file */
  fclose(fp);
  
  return (0);
}
