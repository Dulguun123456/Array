#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the numbers of array: ";
	int arr[size];
	int copy[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Genuine array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Copy array: ";
	for(int i=0;i<size;i++)
	{
		copy[i]=arr[i];
		cout<<copy[i]<<" ";
	}
	
	
	return 0;
}
