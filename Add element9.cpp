#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the elements of array: ";
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int position,element;
	cout<<"Enter the add element: ";
	cin>>element;
	cout<<"Enter the position of element: ";
	cin>>position;
	if(position>size || position==0)
	{
		cout<<"Invalid position";	
	}
	else
	{
	
		for(int i=size;i>=position;i--)
		{
			arr[i]=arr[i-1];
		}
			arr[position-1]=element;
		for(int i=0;i<=size-1;i++)
		{
			cout<<arr[i]<<" ";	
		}	
	}
	return 0;
}
