#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,2,3,9,0,-2,-19,22,98,0};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<10; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Minimum number in this array is: "<<min<<endl;
    cout<<"Maximum number in this array is: "<<max;
}