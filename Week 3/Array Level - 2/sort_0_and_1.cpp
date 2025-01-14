#include<bits/stdc++.h>
using namespace std;

void sort_array(int arr[], int n)
{
    // 1st approach : number of zeros aur 1 count kar lo aur
    // uske hissab se array m daal do....sort ho jayega simple.

    //2nd approach : TWO POINTER METHOD -> TC : 0(N) , SC : 

    // int start =0;
    // int end = n-1;

    // while(start<end)
    // {
    //     if(arr[start]==0 )
    //     {
    //         start++;
    //     }
    //     else if (arr[end]==1)
    //     {
    //         end--;
    //     }
    //     else if( arr[start]==1 && arr[end]==0) // else
    //     {
    //         swap(arr[start],arr[end]);
    //         start++;
    //         end--;  
    //     }
       
    // }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<" "<<arr[i]<<" ";
    // }

    //1st approach -> count zeroes and ones

    
    // int zero_count =0;
    // int one_count =0;

    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         zero_count++;
    //     }
    //     else
    //     {
    //         one_count++;
    //     }
    // }

    // for(int i=0; i<n; i++)
    // {
    //     if(i<zero_count)
    //     {
    //         arr[i] = 0;
    //     }
    //     else
    //     {
    //         arr[i] = 1;
    //     }
    // }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<" "<<arr[i]<<" ";
    // }

    //2nd approach -> two pointer method

    int start = 0;
    int end = n-1;

    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;

        }
        else if(arr[end]==1)
        {
            end--;
        }
        else if(arr[start] ==1&&arr[end]==0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[10]={0,1,0,0,0,1,1,0,1,0};
    sort_array(arr,10);
}