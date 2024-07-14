#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    //dynamically creating the array

    int* arr = new int[n];
    cout<<"Enter the values of array: ";
    for(int i=0; i<n; i++)
    {
        
        cin>>arr[i];
        
    }

    // solving the problem:

    int min = INT_MAX;
    int max = INT_MIN;

    for(int j=0; j<n; j++)
    {
        if(arr[j]> max)
        max = arr[j];

        else if(arr[j]<min)
        min = arr[j];
    }

    cout<<"Maximum value in this array is: "<<max;
    cout<<endl;
    cout<<"Minimum value in this array is: "<<min;

    delete[] arr;
    return 0;
}