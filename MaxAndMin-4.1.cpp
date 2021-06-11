/* Array dahi hamgiin ih 
ba hamgiin baga elementiig oloh*/
#include<iostream>
using namespace std;
int main()
{
	int size;
	int arr[size];
	cout<<"Enter the size:";
	cin>>size;
	cout<<"Enter the number of array:";
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	for(int i=0;i<=size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	
	}
		cout<<"Maximum number of array: "<<max<<endl;
		cout<<"Minimum number of array: "<<min;	

	return 0;	
}
