// File name: ExtremeC_examples_chapter5_7.cpp
// Description: Multiple inheritance in C++

#include <string.h>

class A {
public:
  char a, b[4];
};

class B {
public:
  char c, d;
};

class C {
public:
  char e, f;
};

class D : public A, public B, public C {
public:
  char str[5];
};

int main(int argc, char** argv) {
  D d;
  d.a = 'A';
  strcpy(d.b, "BBB");
  d.c = 'C'; d.d = 'D'; d.e = 'E'; d.f = 'F';
  strcpy(d.str, "1234");
  A* ap = (A*)&d;
  B* bp = (B*)&d;
  C* cp = (C*)&d;
  D* dp = &d;
  // We need to set a break point at this line.
  return 0;
}
