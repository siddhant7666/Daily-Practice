#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    int* arr2 = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int start =0;
    int end = n-1;

    while(start<=end)
    {
        if(start==end)
        cout<<arr[end];
        else
        {
        cout<<arr[start]<<" "<<arr[end]<<" ";
        
        }
        start++;
        end--;
        
    }

    

}