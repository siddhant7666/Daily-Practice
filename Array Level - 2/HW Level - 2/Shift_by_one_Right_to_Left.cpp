#include<bits/stdc++.h>
using namespace std;

// PRINT FUNCTION - ARRAY KO PRINT KARNE KE LIYE
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
}

// SHIFT FUNCTION -> ARRAY KE ELEMENT KO EK PLACE RIGHT SHIFT KARNE KE LIYE 
void shift(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i = n-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    print(arr,10);

}


int main()
{
    int arr[10] = {2,4,5,7,6,6,4,3,8,9};
    shift(arr,10);
}