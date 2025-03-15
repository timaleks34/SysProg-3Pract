#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("Введите элементы массива: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    double sum = 0;
    printf("Номера отрицательных элементов: ");
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            printf("%d ", i);
            sum += a[i];
            count++;
        }
    }
    if (count > 0) {
        printf("\nСреднее арифметическое: %.2f\n", sum / count);
    } else {
        printf("\nОтрицательных элементов нет.\n");
    }
    free(a);
    return 0;
}
