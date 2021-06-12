//cpp program to check whether array is sorted or not
#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array:";
	cin>>n;
	int a[n];
	cout<<"Elements of array are:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	for (int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Array is in sorted order. ";
	}
	else
	{
		cout<<"Array is not in sorted order.";
	}
}

