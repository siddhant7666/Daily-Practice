#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] ={
        {2,4,5,3},
        {9,76,45,22},
        {1,4,5,23}
    };

    cout<<"2D ARRAY COLUMNWISE PRINTING"<<endl;

    for(int column=0; column<4; column++)
    {
        for(int row=0; row<3; row++)
        {
            cout<<" "<<arr[row][column];
        }
        cout<<endl;
    }

}