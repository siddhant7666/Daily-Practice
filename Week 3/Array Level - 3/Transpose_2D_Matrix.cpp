#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int row =0; row<3; row++)
    {
        for(int col =row; col<3; col++)
        {
           swap(arr[row][col],arr[col][row]); 
        }
    }

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
