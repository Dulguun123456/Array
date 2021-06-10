 /*
 second largest element
 */

#include <iostream>
using namespace std;
int main()
{
    int size;
    int max1, max2;
    int arr[size];

    /* Input size of the array */
    cout<<"Enter size of the array:";
    cin>>size;

    /* Input array elements */ 
    printf("Enter elements in the array: ");
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    /*
     * Check for first largest and second
     */
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
            
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    cout<<"First largest ="<<max1;
    cout<<"Second largest ="<<max2;

    return 0;
}

