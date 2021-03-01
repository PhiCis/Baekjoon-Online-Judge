#include<bits/stdc++.h>
using namespace std;

int n, elm[2510];

int dp[2510], pnt, cnt;
vector<int> gnl;
vector<char> brk;
void trs(int k)
{
	if(k==0) gnl.push_back(0);
	else gnl.push_back(dp[k-1]);
	brk.push_back('(');
	
	cnt++;
	dp[k]=cnt;
	
	if(elm[pnt]!=k)
	{
		trs(k+1);
		trs(k+1);
	}
	else
	{
		pnt++;
	}
	
	brk.push_back(')');
	
	return;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &elm[i]);
	}
	
	//step 1: check
	stack<int> S;
	for(int i=0;i<n;i++)
	{
		int tmp=elm[i];
		while(!S.empty()&&tmp==S.top())
		{
			S.pop();
			tmp--;
		}
		S.push(tmp);
	}
	if(!(S.size()==1&&S.top()==0))
	{
		printf("NIE");
		return 0;
	}
	
	//step 2: Level to Genealogical, Level to Bracket
	trs(0);
	
	//step 3: print
	for(int i=0;i<gnl.size();i++)
	{
		printf("%d ", gnl[i]);
	}
	printf("\n");
	for(int i=0;i<brk.size();i++)
	{
		printf("%c", brk[i]);
	}
	
	return 0;
}
