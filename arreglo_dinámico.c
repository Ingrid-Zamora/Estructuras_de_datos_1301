#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char Respuesta;
    int longtd, size, i, j;
    char **matriz, cadena[100], letra;

    do {
        
        printf("Ingresar una sola palabra en mayusculas: ");
        scanf("%s", cadena);
        
        longtd = strlen(cadena);
        
        matriz = (char **)malloc(longtd * sizeof(char *));
        if (matriz == NULL) {
            printf("Error al asignar memoria\n");
            return 1;
        }
        
        printf("Resultado para: %s\n", cadena);
        printf("\n");
        
        for (i = 0; i < longtd; i++) {
            letra = cadena[i];
            
            if (isupper(letra)) {
                size = letra - 'A' + 1;
                
                matriz[i] = (char *)malloc(size * sizeof(char));
                if (matriz[i] == NULL) {
                    printf("Error al asignar memoria para %c\n", letra);
                    continue;
                }
               
                for (j = 0; j < size; j++) {
                    matriz[i][j] = letra;
                     printf("| %c |", matriz[i][j]);
                }
               
                printf("\n");
                
            } else {
                matriz[i] = NULL;
                printf("| %c | -> NULL\n", letra);
            }
        }
        
        for (i = 0; i < size; i++) {
        	
            if (matriz[i] != NULL) {
                free(matriz[i]);
            }
        }
        
        free(matriz);
        
        printf("\nRepetir?(S/N): ");
        scanf(" %c", &Respuesta);
        
    } while(Respuesta == 'S' || Respuesta == 's');
    
    return 0;
}
