#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<" Enter the value of rows: ";
    int row;
    cin>>row;
    cout<<"Enter the value of columns: ";
    int col;
    cin>>col;

    int arr[row][col];

    cout<<"Enter the values of 2d array: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<endl<<"Enter the value for: "<<i<<" "<<j<<endl;
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array: ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }


}