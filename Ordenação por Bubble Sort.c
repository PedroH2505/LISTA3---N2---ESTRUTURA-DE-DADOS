#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n, int *num_if, int *num_trocas) {
    int i, j;
    *num_if = 0;
    *num_trocas = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            (*num_if)++;
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*num_trocas)++;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);
    int arr[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    printf("Array original:\n");
    printArray(arr, n);

    int num_if, num_trocas;
    bubbleSort(arr, n, &num_if, &num_trocas);

    printf("Array ordenado:\n");
    printArray(arr, n);
    printf("Número de comparações (if's): %d\n", num_if);
    printf("Número de trocas: %d\n", num_trocas);

    return 0;
}
