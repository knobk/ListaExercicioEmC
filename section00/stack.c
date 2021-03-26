/*Stack implementation using static array*/

#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5 //stack size

int stack[CAPACITY], top = -1;

//function prototype
int isFull(void);
int isEmpty(void);
void push(int);
int pop(void); 
void peek(void);
void traverse(void);

//function main
int main(void) {
  int choice, item;

  while (1) {
    printf("1-Push\n");
    printf("2-Pop\n");
    printf("3-Peek\n");
    printf("4-Traverse\n");
    printf("5-Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printf("Enter element: ");
        scanf("%d", &item);
        push(item); 
        break;
      case 2:
        item = pop();
        if (item == 0) {
          printf("stack is underflow!\n");
        } else {
          printf("popped item: %d\n", item);
        }
        break;
      case 3:
        peek();
        break;
      case 4: 
        traverse();
        break;
      case 5: 
        exit(0);
      default: 
        printf("Invalid input!\n");
    }
  }

  return 0;
}

int isFull(void){
  if (top == CAPACITY - 1) {
    return 1;
  } else {
    return 0;
  }
}

int isEmpty(void) {
  if (top == -1) {
    return 1;
  } else {
    return 0;
  }
}

void push(int element) {
  if (isFull()) {
    printf("stack is overflow!\n");
  } else {
    top++;
    stack[top] = element;
    printf("%d inseted!\n", element);  
  }
}

int pop(void) {
  if (isEmpty()) {
    return 0;
  } else {
    return stack[top--]; 
  }
}

void peek(void) {
  if (isEmpty()) {
    printf("stack is underflow!\n");
  } else {
    printf("peek element: %d\n", stack[top]);
  }
}

void traverse(void) {
  if (isEmpty()) {
    printf("stack is underflow!\n");
  } else {
    for (int i = 0; i <= top; i++) {
      printf("%d\n", stack[i]);
    }
  } 
}

