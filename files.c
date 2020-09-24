#include <stdio.h>
#include "files.h"


FILE * file_new(char *name, char *mode)
{
  FILE *fp = NULL;
  fp = fopen(name, mode);
  if (fp == NULL){
      puts("FILE OPEN ERROR");
      return NULL;
    }
  else
    return fp;
}

void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows)
{
  size_t i, j;
  for(i = 0; i <= rows; i++)
  {
    for(j = 0; j <= columns; j++)
    {
      fprintf(file, "%Lf \t", buff[i][j]);
    }
    fprintf(file,"\n");
  }
  return;
}
