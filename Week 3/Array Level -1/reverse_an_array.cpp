#include<iostream>
using namespace std;
int main()
{
    int arr[6]={9,0,2,3,4,1};
    int start =0;
    int end = 5;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout<<"New array is :"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}