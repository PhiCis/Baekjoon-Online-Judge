#include<bits/stdc++.h>
using namespace std;

int n, A[1010];
int main()
{
	scanf("%d", &n);
	A[0]=A[1]=1;
	for(int i=2;i<=n;i++)
	{
		A[i]=1;
		while(1)
		{
			for(int j=1;2*j<=i;j++)
			{
				if(A[i]-A[i-j]==A[i-j]-A[i-2*j]) goto retry;
			}
			break;
retry:
			A[i]++;
		}
	}
	printf("%d", A[n]);
}
