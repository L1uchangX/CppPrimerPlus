## sizeof and climits
```c++
cout << sizeof (int);
cout << sizeof n_short;
```

## Integer Literals
about oct,hex   
```c++
cout << oct;  
cout << hex;
```   
the manipulator hex is really a message to cout that tells it how to behave.

## Type Casts
```c++
(typeName) value // old C syntax   
typeName (value) // new C++ syntax

static_cast<typeName> (value) // converts value to typeName type

int auks;  
auks = 19.99 + 11.99; // **auks = 31**   
bats = (int) 19.99 + (int) 11.99;  // **bats = 30**   
coots = int (19.99) + int (11.99); // **coots = 30**
```
