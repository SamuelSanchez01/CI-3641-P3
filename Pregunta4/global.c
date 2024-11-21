#include <stdio.h>
#include <time.h>
#define n 1000000
#define m 1000
int matrix[n][m];

//Funcion para sumar elementos recorriendo por filas
void sumByRows(int N, int M) {
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
        }
    }
}

//Funcion para sumar elementos recorriendo por columnas
void sumByColumns(int N, int M) {
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



        clock_t start;
        clock_t end;
        double time_spent;
        //Medicion de tiempo para sumByRows
        for (int i = 0; i<3;i++){
        start = clock();
        sumByRows(N, M);
        end = clock();
        time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("global %d x %d: %f\n", N, M,time_spent);
        }
        for (int i = 0; i<3;i++){
        //Medicion de tiempo para sumByColumns
        start = clock();
        sumByColumns(N, M);
        end = clock();
        time_spent = (double)(end - start) / CLOCKS_PER_SEC;
        printf("global %d x %d: %f\n", N, M,time_spent);
        }

    return 0;
}
