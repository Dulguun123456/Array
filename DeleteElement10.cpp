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
	int elemnet,position;	
	
	cout<<"Enter the delete position: ";
	cin>>position;	
		
	for(int i=position-1;i<size;i++)
		{
				arr[i]=arr[i+1];
		}	
	for(int i=0;i<size-1;i++)
		{
			cout<<arr[i];	
		}
	return 0;
}
