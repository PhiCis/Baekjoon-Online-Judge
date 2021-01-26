#include<stdio.h>
int n, i, j;
long long a, b, t, T;
int main()
{
	scanf("%d", &T);
	for(i=0;i<T;i++){
		a=0;b=1;
		scanf("%d", &n);
		if(n==0){
			printf("1 0\n");
			continue;
		}
		for(j=1;j<n;j++){
			t=a+b;
			a=b;
			b=t;
		}
		printf("%lld %lld\n", a, b);
	}
}
