#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "lexer.h"

/*void lexer(FILE *file){
  char current = fgetc(file);

    while (current != EOF)
    {
      printf("%c", current);
      current = fgetc(file); 
    }
}*/

int getSizeofFile(char *name){
  int size = 0;
  FILE* current = fopen(name,"r");

  if (current == NULL) {
        printf("Could not open file %s\n", name);
        return 0;
  }

  while (fgetc(current) != EOF)
  {
    size++;
  }
  
  fclose(current);
  return size;
}

char* fileToString(char *name, int size){
  FILE* file = fopen(name,"r");
  char* arr = malloc((size + 1) * sizeof(char));
  int c,i = 0;

  if (file == NULL) {
        printf("Could not open file %s\n", name);
        return NULL;
  }

  if (arr == NULL){
    printf("no memory");
    fclose(file);
    return NULL;
  }
  
  while ((c = fgetc(file)) != EOF){
    arr[i] = c;
    i++;
  }

  arr[i] = '\0';
  fclose(file);
  return arr;
}


int main(void) {
    FILE* file;
    int count = getSizeofFile("test.txt");
    char* arr = fileToString("test.txt", count);

    for (int i = 0; i < count; i++)
    {
      printf("%c", arr[i]);
    }
    
    //lexer(arr);
    return 0;
}
