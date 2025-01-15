#include<bits/stdc++.h>
using namespace std;

void transpose(int arr[3][3], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j>=i)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int arr [3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    transpose(arr, 3, 3);

}