#include <stdio.h>

void swap(int*, int*);
int add(int, int);

int main(void) {
  int a = 10, b = 20;

  printf("Before swap: %d \t %d\n", a, b);
  //function call by reference
  swap(&a, &b);
  printf("After swap: %d \t %d\n", a, b);

  //function pointer
  int (*ptr)(int, int);
  *ptr = &add;
  int c = *ptr(a, b);
  printf("a + b = %d\n", c);

  return 0;
}

int add(int x, int y) {
  return x + y;
}

void swap (int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}
