#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int choice;

    // Prompt the user to choose between malloc or calloc
    printf("Choose allocation type:\n");
    printf("1. malloc\n2. calloc\nChoice (1/2): ");
    scanf("%d", &choice);

    // Ask the user for the size of the array
    printf("Enter size (n): ");
    scanf("%d", &n);

    // Switch case to handle malloc or calloc
    switch (choice) {
        case 1: // malloc case
            arr = (int*)malloc(n * sizeof(int));
            if (arr == NULL) {
                printf("Allocation failed!\n");
                return 0;
            }
            break;

        case 2: // calloc case
            arr = (int*)calloc(n, sizeof(int));
            if (arr == NULL) {
                printf("Allocation failed!\n");
                return 0;
            }
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Input values
    printf("Enter values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display values
    printf("Values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    int new_n;
    // Ask for the new size
    printf("New size: ");
    scanf("%d", &new_n);
    if (new_n < n) {
        printf("Cannot shrink size!\n");
        return 1;
    }

    // Reallocate memory
    arr = (int*)realloc(arr, new_n * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 0;
    }

    // Input new values
    printf("Enter new values:\n");
    for (int i = n; i < new_n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display updated values
    printf("Updated values:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d\n", arr[i]);
    }

    // Free memory
    free(arr);
    return 0;
}
