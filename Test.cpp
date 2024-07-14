#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n]={1,0,0,0,1,0,1,0,1,0,0,0,1,1,2,3,4,5,0,1,0};
    int zero_count=0;
    int one_count=0;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==0)
        zero_count++;
        else if(arr[i]==1)
        one_count++;
    }

    cout<<"The number of zeroes in this program is: "<<zero_count;
    cout<<endl;
    cout<<"The number of ones in this program is: "<<one_count;


}