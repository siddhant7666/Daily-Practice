// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int* arr = new int[n];
//     int* arr2 = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     int start =0;
//     int end = n-1;

//     while(start<=end)
//     {
//         if(start==end)
//         cout<<arr[end];
//         else
//         {
//         cout<<arr[start]<<" "<<arr[end]<<" ";
        
//         }
//         start++;
//         end--;
        
//     }

    

// }


// Find Unique element :

// #include<iostream>
// using namespace std;
// int main()
// {

//     int* arr = new int[9]{1,2,3,2,4,3,4,6,6};

//     for(int i=0; i<9; i++)
//     {
//         bool ans = true;
//         for(int j=0; j<9; j++)
//         {
//             if(j!=i && arr[i]==arr[j])
//             {
//                 ans = false;
//                 break;
//             }

//         }

//         if(ans==true)
//         {
//             cout<<"Answer is: "<<arr[i];
            
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3]={1,2,3};
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             cout<<"["<<" "<<arr[i]<<","<<arr[j]<<" "<<"]";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[3]={10,20,30};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                cout<<"["<<" "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" "<<"]";
            }
            cout<<endl;
        }
    }
}