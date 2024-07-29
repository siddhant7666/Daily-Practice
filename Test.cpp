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

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr2[5][10];
//     int arr[2][4]={
//         {1,2,3,4},
//         {5,6,7,8}
//     };

//     // cout<<arr[1][3];

//     for(int i=0; i<2; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

// }


// PRINTING 2D ARRAY COLUMNWISE:

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[2][4]={
//         {1,2,3,4},
//         {5,6,7,8}
//     };

//     cout<<"Priniting the array columnwise"<<endl;

//     for(int col=0; col<4; col++)
//     {
//         for(int row=0; row<2; row++)
//         {
//             cout<<arr[row][col]<<" ";

//         }
//         cout<<endl;
//     }
// }


//Taking input in 2d array:

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cout<<"Enter the no. of rows: ";
//     cin>>row;
//     cout<<"Enter the no. of columns: ";
//     cin>>col;

//     // dynamically allocating 2d array

//     int** arr = new int*[row];
//     for(int i=0; i<row; i++)
//     {
//         arr[i]=new int[col];
//     }

//     // vector<vector<int>> arr(row, vector<int>(col)); WE CAN USE VECTOR AS WELL FOR CREATING ARRAY DYNAMICALLY



//     // int arr[row][col]; 
//     //not  recommended as its a variable length array and some compilers might not support and code might not be portable across platfroms. also large arrays can lead to stack overflow, better use VECTORS OR DYNAMICALLY CREATED ARRAYS.

//     cout<<"Enter the elements of 2d array: ";

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<col; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }  

//     cout<<"Printing the elements "<<endl;

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<col; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }  


// }

// LINEAR SEARCH IN A 2D ARRAY:

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row;
//     int col;
//     cout<<"Enter row: ";
//     cin>>row;
//     cout<<"Enter column: ";
//     cin>>col;

//     int** arr = new int*[row];
//     for(int i=0; i<row; i++)
//     {
//         arr[row]=new int[col];
//     } 

//     cout<<"Enter the array's elements: ";

//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<col; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     cout<<"Enter which number do you want to search in this array: ";
//     int temp;
//     cin>>temp;

//     bool ans = false;

//     for(int i=0; i<row; i++)
//     {
        
//         for(int j=0; j<col; j++)
//         {
//             if(arr[i][j]==temp){
//                 ans= true;
//                 break;
//             }
//         }
//         if(ans)
//         {
//             cout<<"Element found successfully.";
//             break;
            
//         }

//     }

//     if(!ans)
//     {
//         cout<<"Element not found, unfortunately.";
//     }

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4]={
//         {1,2,3,4},
//         {4,5,6,7},
//         {6,7,8,9}
//     };
//     int min = INT_MAX;
//     int max = INT_MIN;

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             if(arr[i][j]>max)
//             max = arr[i][j];
//             if(arr[i][j]<min)
//             min = arr[i][j];
            
//         }
//     }

//     cout<<"Max is: "<<max;
//     cout<<endl;
//     cout<<"Min is: "<<min;


// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][4]={
//         {1,2,3,4},
//         {4,5,6,7},
//         {6,7,8,9}
//     };
//     int row_sum =0;

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             row_sum+=arr[i][j];
//         }
//     }

//     cout<<"Row-wise sum is: "<<row_sum<<endl;

//     int col_sum =0;

//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//             col_sum+=arr[j][i];
//         }
//     }
//     cout<<"Column-wise sum is: "<<col_sum;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={
//         {1,2,3},
//         {2,3,4},
//         {3,4,5}
//     };
//     int principal_diagonal_sum =0;

//     for(int row = 0; row<3; row++)
//     {
//         for(int col = 0; col<3; col++)
//         {
//             if(row==col)
//             principal_diagonal_sum+=arr[row][col];
//         }
//     }

//     cout<<"Sum of principal diagonal sum is: "<<principal_diagonal_sum;
// }

//TRANSPOSE OF A MATRIX

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     for(int row =0; row<3; row++)
//     {
//         for(int col =0; col<3; col++)
//         {
//             if(col>=row)
//             swap(arr[row][col],arr[col][row]);
//         }
//     }


//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }
// }


//TRANSPOSE IN CASE OF A NON SQUARE
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     int transpose[4][3];

//     // Transpose the matrix
//     for(int row = 0; row < 3; row++)
//     {
//         for(int col = 0; col < 4; col++)
//         {
//             transpose[col][row] = arr[row][col];
//         }
//     }

//     // Print the transposed matrix
//     for(int row = 0; row < 4; row++)
//     {
//         for(int col = 0; col < 3; col++)
//         {
//             cout << transpose[row][col] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//MOVING ALL NEGATIVE NUMBERS TO THE LEFT
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={-2,0,3,-4,2, -6};
//     int index =0;
//     int left =0;
//     while(index<6)
//     {
//         if(arr[index]<0)
//         {
//             swap(arr[left],arr[index]);
//             left++;
//         }
//         index++;
        
//     }
//     cout<<"Printing the elements: ";
//         for(int i=0; i<6; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
// }



// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {

    
// vector<int>arr{-2,0,1,-3,4,-2};

// int left =0;
// int indices =0;

// while(indices<6)
// {
//     if(arr[indices]<0)
//     {
//         swap(arr[left],arr[indices]);
//         left++;

//     }
//     indices++;
// }

// cout<<"OUTPUT ARRAY: "<<endl;

// for(int i=0; i<6; i++)
// {
//     cout<<arr[i]<<" ";

// }


 




// }


// BINARY SEARCH 

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int>&arr, int n, int target)
//     {
//         int start =0;
//         int end = n-1;

//         int mid = start+(end-start)/2;

//         while(start<=end)
//         {
//             if(arr[mid]==target)
//             {
//                 return mid;
//             }

//             else if(arr[mid]>target)
//             {
//                 end = mid-1;
//             }
//             else
//             {
//                 start=mid+1;
//             }

//             mid = start+(end-start)/2;
//         }

//         return -1;

//     }



// int main()
// {
//     vector<int>arr{10,20,20,40,50,60,70,80,90};
//     int target = 700;
//     int n = 9;

//     int ans = binarySearch(arr, n, target);

//     if(ans==-1)
//     {
//         cout<<"Element not found"<<endl;
//     }
//     else
//     {
//         cout<<"Element found at index: "<<ans<<endl;
//     }

    



// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,3,3,3,5};

//     int n = 5;

//     int i = 0;
//     while(i<n)
//     {
//         int index = arr[i]-1;
//         if(arr[i]!=arr[index])
//         {
//             swap(arr[i],arr[index]);
//         }
//         else
//         {
//             i++;
//         }
//     }

    

//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]!=i+1)
//         {
//             cout<<i+1<<" ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[8] = {10,20,30,30,30,40,50,50};
//     int target = 50;
//     int n = 8;

//     int start =0;
//     int end =n-1;
//     int mid = start+(end-start)/2;

//     int ind = -1;

//     while(start<=end)
//     {
//         mid = start + (end-start)/2;
//         if(arr[mid]==target)
//         {
//             ind = mid;
//             end = mid-1;

//         }
//         else if(arr[mid]>target)
//         {
//             end = mid-1;
//         }
//         else
//         {
//             start = mid+1;
//         }

//     }
//     cout<<"Index is: "<< mid;
// }

// MISSING ELEMENT IN A SORTED ARRAY BY BINARY SEARCH

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,4,5,6,7,8};
//     int n =7;

//     int start =0;
//     int end = 6;
//     int mid = start+(end-start)/2;
//     int ans = -1;

//     while(start<=end)
//     {
//         mid = start+(end-start)/2;
//         int diff = arr[mid]-mid;
//         if(diff!=1)
//         {
//             ans = mid;
//             end = mid-1;
//         }
//         else
//         {
//             start = mid+1;
//         }
//     }

//     if(ans!=-1)
//     {
//         cout<< ans+1;
//     }
//     else
//     {
//         cout<< n+1;
//     }

// }

// WAVE PRINT A MATRIX


#include<bits/stdc++.h>
using namespace std;





int main()
{
    int arr[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    
    

}