#include<bits/stdc++.h>
using namespace std;

int N;
double A[10010], DP[10010], ANS;
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%lf", &A[i]);
	}
	DP[0]=1.0;
	ANS=A[1];
	for(int i=1;i<=N;i++)
	{
		DP[i]=DP[i-1]>1.0?DP[i-1]*A[i]:A[i];
		ANS=max(ANS, DP[i]);
	}
	printf("%.3lf", ANS);
}
