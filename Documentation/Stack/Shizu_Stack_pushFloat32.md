# `Shizu_Stack_pushFloat32`

*Description*
Push a `Shizu_Float32` object on the stack.

*Signature*
```
void
Shizu_Stack_pushFloat32
  (
    Shizu_State2* state,
    Shizu_Float32 float32Value
  );
```

*Remarks*
The behaviour of this function is undefined if `state` does not point to a `Shizu_State2` object.

*Parameters*
- `state` A pointer to a `Shizu_State2` object.
- `float32Value` The `Shizu_Float32` object to push.

*Errors*
- An allocation failed.
