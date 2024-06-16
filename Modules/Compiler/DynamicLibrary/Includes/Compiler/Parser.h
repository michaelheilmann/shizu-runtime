#if !defined(COMPILER_PARSER_H_INCLUDED)
#define COMPILER_PARSER_H_INCLUDED

#include "Compiler/Object.h"
typedef struct Compiler_Scanner Compiler_Scanner;

Shizu_declareType(Compiler_Parser)

struct Compiler_Parser_Dispatch {
  Compiler_Object_Dispatch _parent;
};

struct Compiler_Parser {
  Compiler_Object _parent;
  Compiler_Scanner* scanner;
};

void
Compiler_Parser_construct
  (
    Shizu_State* state,
    Compiler_Parser* self
  );

Compiler_Parser*
Compiler_Parser_create
  (
    Shizu_State* state
  );

#endif // COMPILER_PARSER_H_INCLUDED
