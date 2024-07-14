#include<iostream>
using namespace std;
int main()
{
    int arr[6] ={12,10,-2,-33,24,-5};
    int index=0;
    int left=0;

    while(index<6)
    {
        if(arr[index]>0)
        {
            index++;
        }
        else
        {
            swap(arr[index],arr[left]);
            left++;
            index++;
        }

    }

    for(int i=0; i<6; i++)
    {
        cout<<" "<< arr[i]<<" ";
    }

}