#ifndef interfaces_H
#define interfaces_H
#include <cstdio>
class A{
public:
  virtual void aa(){};
}; 

class B: public A{
public:
  virtual void ba(){};
};

class C: public B{
public:
  virtual void ca(){};
};
#endif
