#include<stdio.h>
#include<string.h>
char a[333350];
int b[333350], c[1010101];
int len, i, flag;
int main()
{
	scanf("%s", a);
	len=strlen(a);
	if(len==1&&a[0]=='0'){
		printf("0");
		return 0;
	}
	for(i=0;i<len;i++){
		b[i]=a[i]-48;
		c[3*i]=b[i]/4;
		c[3*i+1]=(b[i]%4)/2;
		c[3*i+2]=b[i]&1;
	}
	for(i=0;i<3*len;i++){
		if(flag==0&&c[i]!=0) flag++;
		if(flag) printf("%d", c[i]);
	}
	return 0;
}
