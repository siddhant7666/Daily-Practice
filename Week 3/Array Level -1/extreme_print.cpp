#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {20, 4, 15, 2, 6};
    int start   = 0;
    int end     = 4;
    while(start<=end)
        {
            if(arr[start]==arr[end])
            {
                cout<<arr[start]<<" ";
            
            }
            else
            {
            cout<<arr[start]<<" ";
            start++;
            cout<<arr[end]<<" ";
            end--;

            }
            

        }
       
}