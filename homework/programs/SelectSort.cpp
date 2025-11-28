#include <stdio.h>

void selectionSort(int arreglo[], int n) {
    int i, j, posicion, temp;

    for (i = 0; i < n - 1; i++) {
        posicion = i;  

        for (j = i + 1; j < n; j++) {
            if (arreglo[j] < arreglo[posicion]) {
                posicion = j;
            }
        }

        temp = arreglo[i];
        arreglo[i] = arreglo[posicion];
        arreglo[posicion] = temp;
    }
}

int main() {
    int n;

    printf("Cuántos elementos desea ordenar? ");
    scanf("%d", &n);

    int arreglo[n];

    printf("Inserta los %d elementos:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arreglo[i]);

    selectionSort(arreglo, n);

    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arreglo[i]);

    printf("\n");
    return 0;
}

