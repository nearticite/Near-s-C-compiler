#include <stdio.h>
#include <stdlib.h>

void lexer(FILE *file){
  char current = fgetc(file);

    while (current != EOF)
    {
      printf("%c", current);
      current = fgetc(file);
    }
}