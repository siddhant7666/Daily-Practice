#include<iostream>
using namespace std;
int main()
{
    int arr[5]={9,0,2,3,1};
    int start =0;
    int end = 4;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"Reversed array is: ";

    for(int i=0; i<5; i++)
    {
        
        cout<<arr[i]<<" ";
    }
}