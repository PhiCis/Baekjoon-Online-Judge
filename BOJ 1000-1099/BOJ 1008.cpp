#include<stdio.h>
int a, b;
int main(void)
{
	scanf("%d%d", &a, &b);
	printf("%.10lf", (double)a/b);
	return 0;
}
