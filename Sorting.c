#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

// Function to generate a random integer within a specified range
int generateRandomInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to sort an array of integers using bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array of integers
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n, i;

    srand(time(NULL)); // Seed the random number generator

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Array size exceeds maximum limit.\n");
        return 1;
    }

    // Generate random integers and store them in the array
    for (i = 0; i < n; i++) {
        arr[i] = generateRandomInt(1, 100);
    }

    printf("Original array: ");
    printArray(arr, n);

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
