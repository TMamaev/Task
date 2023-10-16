#include <math.h>
#include <stdio.h>

// preprocessing
// gcc -E -o main.full main.c

// preprocessing + trans
// gcc -S -o main.full main.c

// preprocessing + trans
// gcc -c -o main.o main.c

int main(void) {
  short a = 1e+2; // short int a;
  signed int b = -123;
  unsigned long c = 01234;  // long int c;
  long long d = 0xDEADBEAF; // long long int d;

  char e = 't';

  float f = .1234;
  double g = -3.432;
  long double h = -23e-3; // = -0.023

  printf("%zu\n", sizeof(short));
  printf("%zu\n", sizeof(int));
  printf("%zu\n", sizeof(long));
  printf("%zu\n\n", sizeof(long long));

  printf("%zu\n\n", sizeof(char));

  printf("%zu\n", sizeof(float));
  printf("%zu\n", sizeof(double));
  printf("%zu\n\n", sizeof(long double));

  // + - * / %
  // += *=

  // 5 / 2.0 = 2.5;

  int x1 = 0xDE;
  int x2 = 0xAB;

  // & | ^ >> << ~

  // 1101 1110 = x1
  // 1010 1011 = x2

  // 1000 1010 = res
  // 8    a
  printf("%x\n", x1 & x2);

  // 1111 1111
  // f    f
  printf("%x\n", x1 | x2);

  // 0111 0101
  // 7    5
  printf("%x\n", x1 ^ x2);

  // 0010 0001
  // 2    1
  printf("%x\n", ~x1);

  // 0011 0111 1000
  // 3    7    8
  printf("%x\n", x1 << 2);

  // 0011 0111
  // 3    7
  printf("%x\n", x1 >> 2);

  return 0;
}
