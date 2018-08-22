#include <bits/stdc++.h>

using namespace std;

long arr[1000];

int fibo(int n)
{

	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++)
		arr[i]=arr[i-1]+arr[i-2];
    
    cout<<arr[n];       
}

int main()
{
	fibo(100);
}

