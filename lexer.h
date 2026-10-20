void lexer(char* input);

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