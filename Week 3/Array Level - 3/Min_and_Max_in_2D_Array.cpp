#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][3] = {
        {-1,2,3},
        {5,13,8},
        {2,4,3}
    };

    int max = INT_MIN;
    int min = INT_MAX;

    for(int row =0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            if(arr[row][col]>=max)
            {
                max = arr[row][col];
            }
            if(arr[row][col]<=min)    // HUM ISME ELSE IF USE NAHI KAR SAKTE HAI KYUKI
            {                        // WO FIR MAX ASSIGN KARNE KE BAAD MIN KA CHECK 
                min = arr[row][col]; //KAREGA, NEXT NUMBER PAR SWITCH KAR JAYEGA, BUT STARTING
            }                        // MEIN FIRST NUMBER DONO KO ASSIGN HOGA, MIN V MAX V, ISLIYE USE IF
        }
    }

    cout<<"Maximum value in this 2D Array is: "<<max<<endl;
    cout<<"Minimum Value in this 2D Array is: "<<min<<endl;


}