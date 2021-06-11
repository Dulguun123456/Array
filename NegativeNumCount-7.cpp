#include<iostream>
using namespace std;
int main()
{
	int size;
	int arr[size];
	cout<<"Enter the size of array :";
	cin>>size;
	cout<<"Enter the numbers of array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];		
	}
	cout<<"Negative numbers: ";
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
			count++;
		}
	}
	cout<<count;
	
	return 0;
}
