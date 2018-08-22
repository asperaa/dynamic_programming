#include <bits/stdc++.h>

using namespace std;

int calc(int m,int n,int t)
{
	if(t<m)
		return 0;

	int q=max(calc(m,n,t-n)+1,calc(m,n,t-m)+1);
		q=max(calc(m,n,t-n)+1,calc(m,n,t));
	return q;
}
int main()
{
	int m,n,t;

	while(cin>>m>>n>>t)
	{
		cout<<calc(m,n,t);


	}
}