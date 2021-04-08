#include <stdio.h>

#define SIZE 10
int array[SIZE];


void create() {
    printf("\nEnter array items one by one:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }
}

void display() {
    printf("\nThe array elements are: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void insert(int element, int position) {
    int index = position - 1;
    for (int i = SIZE - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }
    array[index] = element;
}

void delete(int position) {
    int index = position - 1;
    for (int i = index; i < SIZE; i++) {
        array[i] = array[i + 1];
    }
}

int search(int element) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] == element) {
            return i + 1;
        }
    }
    return -1;
}

void update(int position, int element) {
    int index = position - 1;
    array[index] = element;
}


void main() {
    int choice;
    int isArrayCreated = 0;
    int element, position;

    while (1) {
        printf("\nARRAY OPERATIONS\n1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. SEARCH\n6. UPDATE\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                if (isArrayCreated == 1) {
                    printf("\nThe array is already created.");
                    break;
                }
                create();
                isArrayCreated = 1;
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nEnter element to insert: ");
                scanf("%d", &element);
                printf("\nEnter position to insert at: ");
                scanf("%d", &position);
                insert(element, position);
                break;
            case 4:
                printf("\nEnter position to delete element from: ");
                scanf("%d", &position);
                delete(position);
                break;
            case 5:
                printf("\nEnter element to search: ");
                scanf("%d", &element);
                position = search(element);
                if (position == -1) {
                    printf("\nSpecified element wasn't found in the array.");
                } else {
                    printf("\nSpecified element is present at %d position in array.", position);
                }
                break;
            case 6:
                printf("\nEnter position to update: ");
                scanf("%d", &position);
                printf("\nEnter element to update with: ");
                scanf("%d", &element);
                update(position, element);
                break;
            default:
                printf("\nINVALID INPUT");
        }
    }
}
