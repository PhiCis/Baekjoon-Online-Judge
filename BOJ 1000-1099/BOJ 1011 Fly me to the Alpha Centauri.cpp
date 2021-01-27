#include<stdio.h>
#include<math.h>
int f(int k){
	double tmp=sqrt(k)+0.5;
	if(tmp-(int)tmp>0.5) return 2*(int)tmp;
	else return 2*(int)tmp-1;
}
int t, i, x, y;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d%d", &x, &y);
		printf("%d\n", f(y-x));
	}
}
