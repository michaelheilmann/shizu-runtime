#if !defined(COMPILER_OBJECT_H_INCLUDED)
#define COMPILER_OBJECT_H_INCLUDED

#include "Shizu/Runtime/Type.h"
#include "Shizu/Runtime/Gc.h"
#include "Shizu/Runtime/Object.h"

Shizu_declareType(Compiler_Object)

struct Compiler_Object_Dispatch {
  Shizu_Object_Dispatch _parent;
};
       
struct Compiler_Object {
  Shizu_Object _parent;
};

void
Compiler_Object_construct
  (
    Shizu_State* state,
    Compiler_Object* self
  );

#endif // COMPILER_OBJECT_H_INCLUDED
