#include <bits/stdc++.h>

using namespace std;


int lis(int a[],int i,int n,int prev)
{
	if(i==n)
		return 0;


	int excl=lis(a,i+1,n,prev);
   

    int incl=0;
    
    if(a[i] > prev)
       incl=1+lis(a,i+1,n,a[i]);


   return max(incl,excl);





}


int main()
{
	int arr[]={10,22,9,33,21,50,41,60,80};

	cout<<lis(arr,0,9,INT_MIN);

}