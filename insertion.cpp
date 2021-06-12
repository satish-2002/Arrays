// cpp program to insert elements in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap,no,i;
	cout<<"Enter size of array:";
	cin>>cap;
	cout<<"Enter no of elments in array:";
	cin>>no;
	if(no>cap)
	{
		cout<<"You cannot insert elements into array."<<endl;
		exit(0);
	}
	else
	{
		cout<<"Enter  elments in array:";
		int arr[cap];
		for(i=0;i<no;i++)
		{
			cin>>arr[i];
		}
		int index,pos,ele,i;
		cout<<"Enter position to be inserted:";
		cin>>pos;
		if(cap==no)
		{
			cout<<"Insertion is not done. Array is full.";
			exit(0);
		}
		cout<<"Enter element to be inserted:";
		cin>>ele;
		index=pos-1;
		for(i=no-1;i>=index;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[index]=ele;
		no++;
		cout<<"Elements after insertion:";
		for(i=0;i<no;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}

