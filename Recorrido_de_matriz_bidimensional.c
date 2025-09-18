#include <stdio.h>
#include <stdlib.h>

int main(){
	char Respuesta;
	int i, j, n, m;
	int matriz[10][10];
	char cadena;
	
	do{
		printf("Insertar el número de filas (maximo 10): ");
	    scanf("%d", &n);
	    printf("Insertar el número de columnas (maximo 10): ");
	    scanf("%d", &m);
	    
	    printf("\nInsertando los elementos de la matriz:\n");
	    
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < m; j++) {
	            printf("Elemento [%d][%d]: ", i, j);
	            scanf("%d", &matriz[i][j]);
	        }
	    }
	    
		//matriz insertada
		printf("\nMatriz insertada:\n");
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < m; j++) {
	            printf("%4d", matriz[i][j]);
	        }
	        printf("\n");
	    }
	    
	    // Recorrido por fila
	    printf("\nRecorrido por fila:\n");
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < m; j++) {
	            printf("%d ", matriz[i][j]);
	        }
	    }
	    printf("\n");
	
	    // Recorrido por columnas desde la última hacia la primera
	    printf("\nRecorrido por columnas desde la última hacia la primera:\n");
	    for (j = m - 1; j >= 0; j--) {
	        for (i = n - 1; i >= 0; i--) {
	            printf("%d ", matriz[i][j]);
	        }
	    }
	    printf("\n");
	
	    // Recorrido en diagonal
	    printf("\nRecorrido en diagonal:\n");
	    int limite = (n < m) ? n : m;  
	    for (i = 0; i < limite; i++) {
	        printf("%d ", matriz[i][i]);
	    }
	    printf("\n");
		
		printf("Repetir?(S/N): ");
		scanf(" %c", &Respuesta);
	}while(Respuesta == 'S'|| Respuesta =='s');
	
	system("pause");
	
	return 0;
}
