#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }

}
void shift(int arr[], int n)
{
    int temp = arr[0];
    for(int i=0; i<n; i++)
    {
        arr[i]= arr[i+1];
    }
    arr[n-1]=temp;

    print(arr,10);

}

int main()
{
    int arr[]={2,4,5,6,7,2,6,2,1,4};
    shift(arr, sizeof(arr)/sizeof(arr[0])); // size -> 10 manually
}