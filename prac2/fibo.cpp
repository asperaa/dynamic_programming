#include <bits/stdc++.h>


using namespace std;


long fibo[1000];

long fib(long n)
{

    if(fibo[n]!=0)
    	return fibo[n];
	
	if(n==0)
		return 0;

	else if(n==1)
		return 1;

    
	else
		{
			fibo[n]=fib(n-1) + fib(n-2);

			return fibo[n];
		}
}

int main()
{
	cout<<fib(100);
}
