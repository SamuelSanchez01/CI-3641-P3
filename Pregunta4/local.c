#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int n = 1000000;
const int m = 1000;

//Funcion para sumar elementos recorriendo por filas
void sumByRows(int **matrix, int N, int M) {
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
        }
    }
}

//Funcion para sumar elementos recorriendo por columnas
void sumByColumns(int **matrix, int N, int M) {
    long long sum = 0;
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            sum += matrix[i][j];
        }
    }
}

int main() {

        int N = n;
        int M = m;

        //Reserva de memoria para la matriz
        int **matrix = (int **)malloc(N * sizeof(int *));
        for (int i = 0; i < N; i++) {
            matrix[i] = (int *)malloc(M * sizeof(int));
        }

        clock_t start;
        clock_t end;
        double time_spent;
        //Medicion de tiempo para sumByRows
        for (int i = 0; i<3;i++){
        start = clock();
        sumByRows(matrix, N, M);
        end = clock();
        time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("local %d x %d: %f\n", N, M,time_spent);
        }
        for (int i = 0; i<3;i++){
        //Medicion de tiempo para sumByColumns
        start = clock();
        sumByColumns(matrix, N, M);
        end = clock();
        time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("local %d x %d: %f\n", N, M,time_spent);
        }
    return 0;
}
