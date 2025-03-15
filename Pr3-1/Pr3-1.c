#include <stdio.h>

int main()
{
	float a,b;
	scanf("%f%f", &a, &b);
	float *ptr_a=&a;
	float *ptr_b=&b;
	*ptr_a*=2;
	*ptr_b/=2;
	printf("a=%f, b=%f\n", a, b);
	return 0;
}
