#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int start =0;
    int end = n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }

}