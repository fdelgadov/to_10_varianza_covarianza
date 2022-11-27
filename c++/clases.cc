#include "clases.h"
#include "interfaces.h"
#include <cstdio>

B* X::foo(B& p){
  printf("X::foo()\n");
  p.aa();
  p.ba();
  
  return NULL;
}

// Covarianza en retorno soportada
/*
C* Y::foo(B& p){
  printf("Y::foo()\n");
  p.aa();
  p.ba();
  
  return NULL;
}
*/

// Contravarianza en retorno no soportada
// Error:
/*
g++ -c clases.cc
In file included from clases.cc:1:
clases.h:12:6: error: invalid covariant return type for ‘virtual A* Y::foo(B&)’
   12 |   A* foo(B&) override;
      |      ^~~
clases.h:6:14: note: overridden function is ‘virtual B* X::foo(B&)’
    6 |   virtual B* foo(B&);
      |              ^~~
make: *** [makefile:8: clases.o] Error 1
*/
/*
A* Y::foo(B& p){
  printf("Y::foo()\n");
  p.aa();
  p.ba();
  
  return NULL;
}
*/

// No hace override
// Error:
/*
g++ -c clases.cc
In file included from clases.cc:1:
clases.h:13:6: error: ‘B* Y::foo(C&)’ marked ‘override’, but does not override
   13 |   B* foo(C&) override;
      |      ^~~
make: *** [makefile:8: clases.o] Error 1
*/
///*
B* Y::foo(C& p){
  printf("Y::foo()\n");
  p.aa();
  p.ba();
  p.ca();
  
  return NULL;
}
//*/
