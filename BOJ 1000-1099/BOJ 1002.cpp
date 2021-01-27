#include<stdio.h>
#include<math.h>
int main()
{
	int x1, y1, r1, x2, y2, r2, n;
	double r;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		if(r==0&&r1==r2) puts("-1");
		else if(r==abs(r1-r2)||r==r1+r2) puts("1");
		else if(r>abs(r1-r2)&&r<r1+r2) puts("2");
		else puts("0");
	}
}
