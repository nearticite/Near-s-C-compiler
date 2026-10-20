#include <stdio.h>
#include <stdlib.h>

void lexer(char *input, int len){ 

  /* */
  return;
}

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

/*typedef union{
  TypeLiterral type;
  int value;
} TokenLiterral;*/

typedef struct {
  TypeKeyWord type;
} TokenKeyWord;

typedef struct {
  TypeSeparator type;
} TokenSeparator;