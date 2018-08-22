#include <bits/stdc++.h>

using namespace std;
int l[100];

int lis(int a[],int n)
{
	for(int i=0;i<n;i++)
		l[i]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j] && l[i]<l[j]+1)
				l[i]=l[j]+1;
		}
	}

	return *max_element(l,l+n);
}

int main()
{
	int arr[]={10,22,9,33,21,50,41,60,80};

	cout<<lis(arr,9);

}