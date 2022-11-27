#include "interfaces.h"
#ifndef clases_h
#define clases_h
class X{
public:
  virtual B* foo(B&);
};

class Y: public X{
public:
  B* foo(B&) override;
  //C* foo(B&) override;
  //A* foo(B&) override;
  //B* foo(C&);// override;
  //B* foo(A&);// override;
  //C* foo(C&);// override;
};
#endif
