#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3]=
    {
        {2,4,6},
        {8,3,5},
        {7,9,1}
    };

    for(int row=0; row<3; row++)
    {
        for(int col=row; col<3; col++)  // FROM col = row kyuki nahi to pura wapas se 
        {                               // normal ho jayega, so diagonal elements including aage tak swap karo.
            swap(arr[row][col],arr[col][row]);
        }
    }

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<" "<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}