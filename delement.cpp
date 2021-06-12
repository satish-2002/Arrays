//cpp program to delete elements in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap,element,count=0;
	cout<<"Enter capacity of array:";
	cin>>cap;
	int a[cap];
	int n;
	cout<<"How many numbers do you want in Array:";
	cin>>n; 
	if(n>cap)
	{
		cout<<"Capacity is only:"<<cap;
		exit(0);
	}
	else
	{
		cout<<"Enter array elments:"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"Array elements are:";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl<<"Which element do you to delete:";
	cin>>element;
	for(int i=0;i<n;i++)
	{
		if(a[i]==element)
		{
			a[i]=a[i+1];
			count=1;
		}
		else if(count>0)
		{
			a[i]=a[i+1];
		}
	}
	if(count==0)
	{
		cout<<"Element is not in Array.";
	}
	else if(count>0)
	{
		cout<<"Element is deleted"<<endl;
		cout<<"Now the array elements are:";
		for(int i=0;i<n-count;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
