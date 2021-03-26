/* Struct implementation */

#include <stdio.h>

//struct global escope
struct log {
  char login[20];
  int pass;
};

void showLogin(char[], int);

int main(void) {
  //struct local escope
  struct per {
    int age;
    char name[20];
    float height;
  };

  //struct inicialization
  struct per person = {32, "Fabrício", 1.76};
  struct log access = {"fabricio", 98765};

  //struct access
  printf("Information of person\n");
  printf("Age: %d\n", person.age);
  printf("Name: %s\n", person.name);
  printf("Height: %.2f\n", person.height);
  showLogin(access.login, access.pass);

  return 0;
}

void showLogin(char l[], int p) {
  printf("Information of login\n");
  printf("Login: %s\n", l);
  printf("Pass: %d\n", p);
}
