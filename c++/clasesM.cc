#include "interfaces.h"
#include <cstdio>

class Ma: public A{
  void aa() override{
    printf("Ma::aa()\n");
  }
};

class Mb: public B{
  void aa() override{
    printf("Mb::aa()\n");
  }
  void ba() override{
    printf("Mb::ba()\n");
  }
};

class Mc: public C{
  void aa() override{
    printf("Mc::aa()\n");
  }
  void ba() override{
    printf("Mc::ba()\n");
  }
  void ca() override{
    printf("Mc::ca()\n");
  }
};
