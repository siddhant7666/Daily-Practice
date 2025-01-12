#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[15]={1,0,1,2,0,0,1,2,1,0,1,1,0,0,1};
    int zero_count =0;
    int one_count =0;
    for(int i=0; i<15; i++)
    {
        if(arr[i]==0)
        {
            zero_count++;
        }
        else if(arr[i]==1)
        {
            one_count++;

        }
    }

    cout<<"Number of Zeros are: "<<zero_count<<endl;
    cout<<"Number of Ones are: "<<one_count;

}