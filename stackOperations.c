#include <stdio.h>


#define SIZE 5

int stack[SIZE];
int top = -1;


int isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

int isFull() {
    if (top == SIZE - 1) {
        return 1;
    }
    return 0;
}

void push(int item) {
    if (isFull()) {
        printf("\n!!STACK OVERFLOW !!");
    } else {
        stack[++top] = item;
    }
}

int pop() {
    if (isEmpty()) {
        printf("\n!!STACK UNDERFLOW !!");
    } else {
        return stack[top--];
    }
    return -1;
}

void display() {
    printf("\nCURRENT STACK\n");
    for (int i = 0; i <= top; i++) {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}


void main() {
    printf("\nSTACK OPERATION\n");
    while (1) {
        int choice;
        printf("\n1. PUSH\n2. POP\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter element to push into stack: ");
                int element;
                scanf("%d", &element);
                push(element);
                display();
                break;
            case 2:
                printf("\nSTACK BEFORE POPPING");
                display();
                pop();
                printf("\nSTACK AFTER POPPING");
                display();
                break;
            default:
                printf("\nPlease enter valid choice.");
                break;
        }
    }
    
}
