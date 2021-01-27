#include<stdio.h>
long long c[40][40], d[40][40], n, m, t;
long long f(int n, int m){
	if(n==0) return 1;
	if(m<=0) return 0;
	if(n>m) return 0;
	if(c[n][m]) return d[n][m];
	c[n][m]=1;
	for(int i=1;i<=m;i++){
		d[n][m]+=f(n-1, m-i);
		//printf("d[%d][%d]+=f(%d,%d)->%d\n", n, m, n-1, m-i, d[n][m]);
	}
	return d[n][m];
}
int main()
{
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d%d", &n, &m);
		printf("%lld\n", f(n, m));
	}	
}
