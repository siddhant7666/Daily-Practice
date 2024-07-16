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


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3]={10,20,30};
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             for(int k=0; k<3; k++)
//             {
//                 cout<<"["<<" "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" "<<"]";
//             }
//             cout<<endl;
//         }
//     }
// }

//SORT 0s and 1s

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,1,1,0,0};
//     int start=0;
//     int end = 4;
//     while(start<end)
//     {
//         while(arr[start]==0&&start<end)
//         {
//             start++;
//         }
//         while(arr[end]==1&&start<end)
//         {
//             end--;
//         }
//         if(start<end)
//         {
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         }


//     }

//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";

//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={10,20,30,40,50,60};
//     int temp = arr[5];
//     for(int i=5; i>=0; i--)
//     {
//         arr[i]=arr[i-1];
//     }

//     arr[0]=temp;
 



//     for(int i=0; i<6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={10,20,30,40,50,60};
//     int temp = arr[5];
//     int temp2 = arr[4];

//     for(int i=5; i>=0; i--)
//     {
//         arr[i]=arr[i-2];
//     }

//     arr[0]=temp2;
//     arr[1]=temp;


//     for(int i=0; i<6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={10,20,30,40,50,60};
//     int temp = arr[0];

//     for(int i=0; i<6; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[5]=temp;

//     for(int i=0; i<6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// 2D ARRAY TEST - PRACTICE

#include<iostream>
using namespace std;
int main()
{
    int arr2[5][10];
    int arr[2][4]={
        {1,2,3,4},
        {5,6,7,8}
    };

    // cout<<arr[1][3];

    
    

}