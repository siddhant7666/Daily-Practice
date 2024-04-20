#include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[], int n)
{
    int ans =0;
    for(int i=0; i<n; i++)
    {
        ans = ans^arr[i];
    }

    /*
Let us consider the above example.  
Let ^ be xor operator as in C and C++.

res = 7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4

Since XOR is associative and commutative, above 
expression can be written as:
res = 7 ^ (3 ^ 3) ^ (4 ^ 4) ^ (5 ^ 5)  
    = 7 ^ 0 ^ 0 ^ 0
    = 7 ^ 0
    = 7 
*/


    return ans;


}


int main()
{
    int arr[5]={2,1,2,3,1};
   int ans =  find_unique(arr,5);
   cout<<"Unique element is: "<<ans;
}