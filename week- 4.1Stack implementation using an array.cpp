```c
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int val) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = val;
    printf("Pushed %d\n", val);
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped %d\n", stack[top--]);
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack (bottom -> top): ");

    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
```
