#include <bits/stdc++.h>
using namespace std;

vector<int>dp(5000,-1);

int main()
{
	int n,a,b,c;

	cin>>n>>a>>b>>c;

	dp[0]=0;
	
	int x,y,z;
	for(int i=1;i<=n;i++)
	{
		x=y=z=-1;
		
		if(i>=a)
			x=dp[i-a];
		
		if(i>=b)
			y=dp[i-b];
		
		if(i>=c)
			z=dp[i-c];

		
		if(x==-1 && y==-1 && z==-1)
			dp[i]=-1;
		
		else
			{
				dp[i]=max(x,max(y,z))+1;
			}
	}

	cout<<dp[n];



}
