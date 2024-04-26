#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target = 15;

    bool ans = true;

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            if(arr[row][col]==target)
            {
                ans = false;
                break;

            }
        }
    }

    if(!ans)
    cout<<"Target Found"<<endl;
    else
    cout<<"Target Not Found"<<endl;
}