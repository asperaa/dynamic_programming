#include <bits/stdc++.h>

using namespace std;
vector<int>dp(10000,-1);
int n,a,b,c;
int cut(int n)
{
	if(n==0)
		return 0;
	if(n<0)
		return -100000;
	if(dp[n]!=-1)
		return dp[n];

	return dp[n]= max(cut(n-a)+1,max(cut(n-b)+1,cut(n-c)+1));
}

int main()
{
	cin>>n>>a>>b>>c;
			
	cout<<cut(n);
}
