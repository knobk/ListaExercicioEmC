/*Union allows to store different data types in the same memory location.*/

#include <stdio.h>

union Data {
  short a;
  short b;
  double c;
};

int main(void) {
  union Data data;

  printf("Memory size occupied by data: %ld\n", sizeof(data)); //double sizeof

  var.a = 10;
  printf("%d\n", data.b);

  var.b = 20;
  printf("%d\n", data.a);

return 0;
}
