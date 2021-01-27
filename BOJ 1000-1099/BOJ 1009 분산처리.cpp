#include<stdio.h>
int t, a, b, tmp, i, j;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d %d", &a, &b);
		tmp=1;
		for(j=0;j<b;j++){
			tmp=(tmp*a)%10;
		}
		printf("%d\n", tmp<1?10:tmp);
	}
	return 0;
}
