/* Array dahi hamgiin ih 
ba hamgiin baga elementiig oloh*/
#include<iostream>
using namespace std;
int main()
{
	int num,maxim,minum,size;
	cout<<"Enter the size of array:";
	cin>>num;
	int arr[num];
	cout<<"Enter the "<<num<<" elements of array:";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<num;i++)
	{
		if(arr[i]>maxim)
		{
			maxim=arr[i];
		}
		else if(arr[i]<minum)
		{
			minum=arr[i];	
		} 
		
	}
	
	cout<<"Maximum element="<<maxim<<endl;;
	cout<<"Minimum element="<<minum;
	
	
	
	
	return 0;
}
