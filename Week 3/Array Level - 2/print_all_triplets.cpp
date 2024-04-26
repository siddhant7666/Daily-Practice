#include<bits/stdc++.h>
using namespace std;

void print_pairs(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                cout<<" "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }


}
int main()
{
    int arr[3]={0,1,2};
    print_pairs(arr,3);

}