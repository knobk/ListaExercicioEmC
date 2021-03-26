/* Array implementation using struct */

#include <stdio.h>

int main() {
//struct local scope
  struct employer {
    int number;
    int marks[4];
  };

//array in struct
  struct employer emp[3];
  int i, j;

//struct inicialization
  for(i = 0; i < 3; i++) {
    emp[i].number = i + 1;
    for(j = 0; j < 4; j++) {
      emp[i].marks[j] = j + 1;
    }
  }

//struct access
  for(i = 0; i < 3; i++) {
    printf("Employer: %d\n",emp[i].number);
    for(j = 0; j < 4; j++) {
      printf("Marks: %d\n",emp[i].marks[j]);
    }
  }

  return 0;
}
