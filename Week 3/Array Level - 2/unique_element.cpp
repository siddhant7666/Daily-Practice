#include<bits/stdc++.h>
using namespace std;

// 1st approach -> looping and looking for 2nd occurenece
// int unique(int arr[], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         bool present = false;
//         for(int j =0; j<n; j++)
//         {
//             if(i!=j)
//             {
//                 if(arr[i]==arr[j])
//                 {
//                     present = true;
//                 }
//             }
//         }
//         if(present==false)
//         {
//             return arr[i];
//         }
//     }
// }

// 2nd approach -> using hashmap

// int unique(int arr[], int n)
// {
//     unordered_map<int, int> freq;
//     for(int i=0; i<n; i++)
//     {
//         freq[arr[i]]++;
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(freq[arr[i]]==1)
//         {
//             return arr[i];
//         }
//     }
// }

//3rd approach -> using XOR

int unique(int arr[], int n)
{
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}


int main()
{
    int arr[7] = {1,2,3,1,2, 3, 5};
    int ans = unique(arr,7);
    cout<<"Unique element is: "<<ans;


}