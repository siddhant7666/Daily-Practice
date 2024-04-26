#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3]= {
        {2,3,4},
        {1,5,6},
        {8,7,5}
    };

    cout<<" 2D ARRAY "<<endl;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            
            cout<<""<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}