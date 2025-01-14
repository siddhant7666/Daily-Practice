#include<iostream>
using namespace std;

void print_pairs(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i]<<" "<<arr[j]<<"      ";
        }
    }
}

int main()
{
    int arr[3]={1,2,3};
    print_pairs(arr,3);
    return 0;
 
}