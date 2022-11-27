#include "interfaces.h"
#ifndef clases_h
#define clases_h
class X{
public:
  virtual B* foo(B&);
};

class Y: public X{
public:
  //C* foo(B&) override;
  //A* foo(B&) override;
  B* foo(C&) override;
};
#endif
