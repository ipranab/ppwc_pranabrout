#include <stdio.h>
#include <stdlib.h>

#define maxsize 5 //pre processor

//function declaration
void push();
void pop();
void display();

int stack[maxsize];
int top = -1;

void main() {
    int choice;
    while(1) {
        printf("Static implementation of stack\n");
        printf("\n---------------------------");
        printf("\n 1.push\n");
        printf("\n 2.pop\n");
        printf("\n 3.display\n");
        printf("\n 4.exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Entered into push\n");
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void push() {
    int num;
    if (top == maxsize - 1) {
        printf("Stack is full\n");
        return;
    }
    printf("Enter element to be pushed onto stack: ");
    scanf("%d", &num);
    top = top + 1;
    stack[top] = num;
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Element popped from stack: %d\n", stack[top]);
    top = top - 1;

    // Optionally, print the current stack after popping
    printf("Current stack elements after pop:\n");
    for (int i = top; i >= 0; i--) {
        printf("stack[%d]: %d\n", i, stack[i]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

