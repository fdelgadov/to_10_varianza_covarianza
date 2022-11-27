#include <cstdio>
#include "clases.h"
#include "clasesM.cc"
#include "interfaces.h"

int main(){
  X x = X();
  Y y = Y();
  Mc m = Mc();

  x.foo(m);
  printf("\n");
  y.foo(m);
}
