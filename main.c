#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <lexer.h>


typedef enum {
  Int,
} TypeLiterral;

typedef enum {
  EXIT,
} TypeKeyWord;

typedef enum {
  SemiComa,
  OpenPara,
  ClosedPara,
} TypeSeparator;

typedef struct {
  TypeLiterral type;
  int value;
} TokenLiterral;

typedef struct {
  TypeKeyWord type;
} TokenKeyWord;

typedef struct {
  TypeSeparator type;
} TokenSeparator;

void lexer(FILE *file){
  char current = fgetc(file);

    while (current != EOF)
    {
      printf("%c", current);
      current = fgetc(file); 
    }
}


int main(void) {
    FILE *file;
    file = fopen("test.txt", "r");
    lexer(file);
    return 0;
}
