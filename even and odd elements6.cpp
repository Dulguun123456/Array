#include<iostream>
using namespace std;
int main()
{
	int size,even,odd;
	int arr[size];
	cout<<"Enter size of the array: ";
	cin>>size;
	cout<<"Enter"<<size<<" elements in array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	even=0;
	odd=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout<<"Total even elements:"<<even<<endl;
	cout<<"Total odd elements:"<<odd;
	return 0;
}
