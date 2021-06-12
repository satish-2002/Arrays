 //cpp program to find maximum element in an array
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
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<a[i])
		{
			maxi=a[i];
		}
	}
	cout<<endl;
	cout<<"The maximum element in the array is: "<<maxi;
}



