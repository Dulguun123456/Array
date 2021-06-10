/* Array n bvh surug elementvvdiig
hewleh c++ program bichih*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter number:";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"Negative elements in array are:";
	for(int i=0;i<num;i++)
	{
		if(arr[i]<0)
		{
			cout<<arr[i]<<" ";
		}
	}

	return 0;
}
