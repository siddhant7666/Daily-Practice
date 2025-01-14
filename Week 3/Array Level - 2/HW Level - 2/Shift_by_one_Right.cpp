#include<bits/stdc++.h>
using namespace std;

void shift(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-2; i>=0; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[0] = temp;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7, 8, 9};
    shift(arr, 10);


}