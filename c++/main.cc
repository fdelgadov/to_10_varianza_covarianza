#include <cstdio>
#include "clases.h"
#include "clasesM.cc"
#include "interfaces.h"

int main(){
  X x = X();
  Y y = Y();
  Ma a = Ma();
  Mb b = Mb();
  Mc c = Mc();

  /*
  x.foo(c);
  printf("\n");
  y.foo(c);
  */

  // Pruebas realizadas con:
  // X::foo() y Y::foo()
  // B foo(&B) overread;
  ///*
  x.foo(b);
  printf("\n");
  y.foo(c);
  //*/

  //Error:
/*
main.cc: In function ‘int main()’:
main.cc:30:9: error: cannot convert ‘Ma’ to ‘B&’
   30 |   y.foo(a);
      |         ^
      |         |
      |         Ma
In file included from main.cc:2:
clases.h:11:10: note:   initializing argument 1 of ‘virtual B* Y::foo(B&)’
   11 |   B* foo(B&) override;
      |          ^~
*/
  /*
  x.foo(b);
  printf("\n");
  y.foo(a);
  */
}
