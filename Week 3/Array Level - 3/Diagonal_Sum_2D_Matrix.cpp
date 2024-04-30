#include<iostream>
using namespace std;
int main()
{
    int arr [][4] ={
        {1,2,3,5},
        {3,2,4,5},
        {6,7,9,8},
        {2,1,4,5}
    };

    int sum =0;

    for(int row = 0; row<=4; row++)
    {
        for(int col =0 ; col<4; col++)
        {
            if(row==col)
            {
                sum+=arr[row][col];
            }
        }
    }

    cout<<"Diagonal Sum of this 2D Array is: "<< sum <<endl;
}