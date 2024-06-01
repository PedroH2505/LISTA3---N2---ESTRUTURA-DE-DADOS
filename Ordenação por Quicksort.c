/*
**    Função : Ordenação por Quicksort
**    Autor : [Seu Nome]
**    Data  : [Data]
**    Observações: Este programa classifica os elementos de um vetor em ordem crescente usando o algoritmo de Quicksort.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n = 10;
    int arr[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    printf("Array original:\n");
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    printf("Array ordenado:\n");
    printArray(arr, n);
    return 0;
}
