////cpp program to find minimum element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[n];
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The array elements are: ";
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<endl;
	cout<<"The minimum element in the array is: "<<min;
}


