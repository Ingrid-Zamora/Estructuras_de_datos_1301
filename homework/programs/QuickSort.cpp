#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particion(int arreglo[], int inicio, int final) {
    int pivot = arreglo[final];   
    int i = inicio - 1;         

    for (int j = inicio; j < final; j++) {
        if (arreglo[j] < pivot) {
            i++;
            swap(&arreglo[i], &arreglo[j]);
        }
    }

    swap(&arreglo[i + 1], &arreglo[final]);
    return i + 1;  
}

void quickSort(int arreglo[], int inicio, int final) {
    if (inicio < final) {
        int p = particion(arreglo, inicio, final);

        quickSort(arreglo, inicio, p - 1);
        quickSort(arreglo, p + 1, final);
    }
}

int main() {
    int n;

    printf("Cuantos elementos desea ordenar? ");
    scanf("%d", &n);

    int arreglo[n];

    printf("Inserta los %d elementos:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arreglo[i]);

    quickSort(arreglo, 0, n - 1);

    printf("\nEl arreglo ordenado es:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arreglo[i]);

    printf("\n");
    return 0;
}

