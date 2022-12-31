## lecture 5 outcomes

- in c/c++ fuction, when passing a parameter it sends a copy of a value.
  - different case for array.

  - what will be the value of a?
    - Answer: value of a is the address of the      a[0]. it is vice-versa.
  - After a[0] = 5; What will be the value of *a?
    - Answer: it will be 5. It means, value from a[0]
- `*(a+1)` => `a[i]`
  - same way, `a[i]` => `*(a+1)`