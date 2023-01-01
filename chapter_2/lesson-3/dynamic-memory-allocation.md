## dynamic memory allocation

- two types of memory allocation
  - stack (less size)
    - when the program starts it starts with stack memory.
    - example- `int i = 10; int a[20];`
    - this also saves in stack `int a[20000];`
    - compile time allocation
    - also called static allocation
      
   - heap (more size)
     - but in dynamic memory allocation, it uses the heap memory allocation -
     - example- ``` int n;                           cin >> n;                       int a[n];                     ```
     - dynamic memory allocation
     - `new int` is a way to allocate heap memory. Actually it gives the memory address of that heap memory.
     - `int* p = new int;` will create 4 size of array in heap memory and store in p pointer.

- `int* p = new int[50];` here p will store the address of the first block of the contiguous memory