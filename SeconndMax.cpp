//cpp program to find second largest number in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[n],maxi2;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter the elements into the array:";	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<a[i])
		{
			maxi=a[i];
		}
		maxi2=-1;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=maxi)
		{
			if(maxi2==-1)
			{
				maxi2=i;
			}
			else if(a[i]>a[maxi2])
			{
				maxi2=i;
			}
		}
	}
	if(maxi2==-1)
	{
		cout<<"No second largest element in the array";
	}
	else
	{
		cout<<"The second largest element in the array is: "<<a[maxi2];
	}
	return 0;
}



