#include <bits/stdc++.h>

using namespace std;
vector<unsigned long long>cnt(100002,0);
vector<unsigned long long >dp(100002,-1);


unsigned long long del(unsigned long long i)
{
	if(i==0)
		return 0;
	if(i==1)
		return cnt[1];

	if(dp[i]!=-1)
		return dp[i];
	

	dp[i]= max(del(i-1),del(i-2)+cnt[i]*i);

	

	return dp[i];
}


int main()
{
	unsigned long long n;
	cin>>n;

	

	for(int i=1;i<=n;i++)
	{
		unsigned long long num;
		cin>>num;

		cnt[num]++;

	}

//	cout<<cnt[22000];
	cout<<del(n);

}