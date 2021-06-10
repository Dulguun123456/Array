/* Array dahi hamgiin ih 
ba hamgiin baga elementiig oloh*/
#include<iostream>
using namespace std;
int main()
{
	int num,max,min;
	int arr[num];
	cout<<"Enter size of the array:";
	cin>>num;
	cout<<"Enter elements in the array:"<<endl;;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<num;i++)
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
	cout<<"Maximum element="<<max<<endl;
	cout<<"Minimum element="<<min;
	return 0;
}
