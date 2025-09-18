#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[25];
    char edad[5];
    char calificaciones[5];
} Alumno;

void CapturaDatos(int n, Alumno *alumno) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nAlumno %d:\n", i + 1);

        printf("\nNombre: ");
        fgets(alumno[i].nombre, 25, stdin);
        alumno[i].nombre[strcspn(alumno[i].nombre, "\n")] = '\0';

        printf("\nEdad: ");
        fgets(alumno[i].edad, 5, stdin);
        alumno[i].edad[strcspn(alumno[i].edad, "\n")] = '\0';

        printf("\nCalificacion: ");
        fgets(alumno[i].calificaciones, 5, stdin);
        alumno[i].calificaciones[strcspn(alumno[i].calificaciones, "\n")] = '\0';
        getchar(); 
    }
}

void Promedio_Calificacion(int n, Alumno *alumno) {
    int i, Edad, Calificacion;
    float promdEdad, promdCalif, suma1 = 0, suma2 = 0;

    for (i = 0; i < n; i++) {
        Edad = atoi(alumno[i].edad);
        Calificacion = atoi(alumno[i].calificaciones);

        suma1 += Edad;
        suma2 += Calificacion;
    }

    promdEdad = suma1 / n;
    promdCalif = suma2 / n;

    printf("\n\t\t----Promedio----\n");
    printf("\nPromedio de edad: %.3f\n", promdEdad);
    printf("\nPromedio del grupo: %.3f\n\n", promdCalif);
}

void Alumnos(int n, Alumno *alumno) {
    int i;
    printf("\n\t\t----Datos en orden inverso----\n");
    printf("|%-25s| %-6s |%-12s|\n", "Nombre", "Edad", "Calificaciones");

    for (i = n - 1; i >= 0; i--) {
        printf("|%-25s| %-6s |%-12s|\n",
               alumno[i].nombre,
               alumno[i].edad,
               alumno[i].calificaciones);
    }
}

int main() {
    char respuesta;
    int n;

    do {
        system("cls");

        Alumno *alumno;
        printf("\nCuantos alumnos desea ingresar: ");
        scanf("%d", &n);
        getchar();

        alumno = (Alumno *)malloc(n * sizeof(Alumno));

        if (alumno == NULL) {
            printf("Error al asignar memoria\n");
            return 1;
        }

        CapturaDatos(n, alumno);
        Alumnos(n, alumno);
        Promedio_Calificacion(n, alumno);

        free(alumno);

        printf("Repetir (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}





