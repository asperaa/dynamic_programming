#include <bits/stdc++.h>

using namespace std;


int n;
int a,b,c;

#define INF 100000
int dp[100000];

int cut(int n)
{
	if(n==0)
		return 0;
	if(n<0)
		return -1*INF;

	if(dp[n]!=-1)
		return dp[n];
	
	int q;	
	q= max(1+cut(n-a),max(1+cut(n-b),1+cut(n-c)));
	dp[n]=q;

	return dp[n];
}


int main()
{


	cin>>n>>a>>b>>c;
	

	for(int i=0;i<=n;i++)
		dp[i]=-1;
	
	int res=cut(n);

	if(res!=-1*INF)
		cout<<res;
	else
		cout<<-1;

}


