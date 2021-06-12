#include<iostream>
using namespace std;
int main()
{
	int n,sum,a[n];
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter sum:";
	cin>>sum;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int sum1=0;
			for(int k=0;k<=j;k++)
			{
				cout<<a[k]<<" ";
				sum1=sum1+a[k];
				
			}
			cout<<endl;
			if(sum1==sum)
			{
				cout<<"=======>exists";
				exit(0);
			}
		}
	}
}
