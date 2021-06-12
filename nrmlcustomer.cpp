//cpp program to print more visited customers using nrml procedure
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *mx=max_element(arr,arr+n);
	int fr[*mx+1]={0};
	for(int i=0;i<n;i++)
	{
		fr[arr[i]]++;
	}
	int id,maxi=0;
	for(int i=0;i<=*mx;i++)
	{
		if(maxi<fr[i])
		{
			maxi=fr[i];
			id=i;
		}
	}
	cout<<"The customer having ID visited more times: "<<id;
}


