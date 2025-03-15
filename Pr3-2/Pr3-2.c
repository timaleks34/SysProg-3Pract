#include <stdio.h>
#include <stdlib.h>

int main() {
    double *p1;
    double *p2;
    double *p3;

    p1=(double*)malloc(sizeof(double));
    p2=(double*)malloc(sizeof(double));
    p3=(double*)malloc(sizeof(double));


    *p1 = 10.5;
    *p2 = 20.5;
    *p3 = 30.5;

    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("p1 = %.2f, p2 = %.2f, p3=%.2f\n", *p1, *p2, *p3);

    free(p1);
    free(p2);
    free(p3);
    return 0;
}
