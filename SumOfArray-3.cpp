/* Array-n elementvvdiin 
niilberiig oloh c programm bich*/
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter number:";
	cin>>num;
	int arr[num];
	cout<<"Enter "<<num<<" elements in the array:";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<num;i++)
	{
		sum=sum+arr[i];
	}
	
	cout<<"Sum of all elements of array="<<sum;
	
	
	return 0;
}
