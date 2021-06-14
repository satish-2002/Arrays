//cpp program to print subsets of given array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintSubSets(int ind,int n,int a[],vector<int>&ds)
{
	if(ind==n)
	{
		cout<<"{";
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"}";
		cout<<"\n";
		return;
	}
	ds.push_back(a[ind]);
	PrintSubSets(ind+1,n,a,ds);
	ds.pop_back();
	PrintSubSets(ind+1,n,a,ds);
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int>ans;
	cout<<"The subsets of the given array are:"<<endl;
	PrintSubSets(0,n,a,ans);
	return 0;
}	
