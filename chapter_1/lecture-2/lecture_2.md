## learning points of chapter 1 => lecture 2
- size of a pointer.
  - what will be the size of

  ```
  int *p;
  double *pd;
  char *cp;
  ```
  - ~~Firstly all sizes will be the same. Secondly, size depends on the processor; for 32-bit processor, it is 4 bytes, and for 64-bit processor, it is 8 bytes.~~
  - For int = 4, double = 8, char = 1; for +1, it will increase 4 for int type, 8 for double type, and 1 for char type. 