#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    double *b = (double*)malloc(n * sizeof(double));
    printf("Введите элементы массива b: ");
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &b[i]);
    }

    double *C = (double*)malloc(n * sizeof(double));
    int c_size = 0;

    for (int i = 0; i < n; ++i) {
        if (b[i] > 0) {
            C[c_size] = sqrt(b[i]) / 5.0;
            c_size++;
        }
    }

    for (int i = 0; i < c_size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < c_size; ++j) {
            if (C[j] < C[min_idx]) {
                min_idx = j;
            }
        }
        double temp = C[i];
        C[i] = C[min_idx];
        C[min_idx] = temp;
    }

    printf("Массив C после сжатия и сортировки: ");
    for (int i = 0; i < c_size; ++i) {
        printf("%.2f ", C[i]);
    }

    free(b);
    free(C);
    return 0;
}
