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


// #include<bits/stdc++.h>
// using namespace std;

// void wave_print(int arr[3][4])
// {
//     for(int col =0; col<4; col++)
//     {
//         for(int row =0; row<3; row++)
//         {
//             if(col%2==0)
//             {
//                 cout<<arr[row][col]<<" ";
//             }
//             else
//             {
//                 cout<<arr[2-row][col]<<" ";
//             }
//         }
//     }

// }





// int main()
// {
//     int arr[3][4] ={
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };

//     wave_print(arr);
    

// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 3;
//     int b = 4;

//     // a = 4
//     // b = 3

//     // METHOD 1 -> using temp variable 

//     cout<<"Before Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

//     int temp; 

//     temp = a;
//     a = b;
//     b= temp;

//     cout<<"After Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

// }


// METHOD 2 -> USING ARITHMETIC OPERATION

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 3;
//     int b = 4;

//     // a = 4  // TARGET
//     // b = 3

    

//     cout<<"Before Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

//     a = a+b;  // 7
//     b = a-b;  // 7-4 = 3
//     a = a-b;  // 7-3 = 4



    


//     cout<<"After Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

// }


// METHOD 3 -> USING INBUILT SWAP FUNCTION 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 3;
//     int b = 4;

//     cout<<"Before Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

//     //swap(x,y)

//     swap(a,b);

//     cout<<"After Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

// }


// METHOD 4 : USING XOR 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 3;
//     int b = 4;

//     cout<<"Before Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

//     a = a^b;  // a = 3^4
//     b = a^b; // b = a^b = 3^4^4 = 3 
//     a = a^b; // a = a^b = 3^4^3 = 4

//     cout<<"After Conversion"<<endl;

//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b<<endl;

// }

// CP INTERFACE
// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {

// }

// int main()
// {
//     int t;
//     cin>>t; 
//     while(t--)
//     {
//         solve();
//     }
// }




// OOPS PRACTICE 

// #include<iostream>
// using namespace std;

// class student
// {
//     public:
//     int id;
//     string name;
//     int roll;
//     void setname(string s)
//     {
//         name = s;
//     }

// };

// int main()
// {
//     student s1;
//     s1.id = 1;
//     s1.name = "Sidd";
//     s1.roll = 3;
//     s1.setname("Palak");

    


//     cout<<s1.id<<endl<<s1.name<<endl<<s1.roll<<endl;


// }


// GETTER AND SETTER FUNCTION 

// #include<iostream>
// using namespace std;

// class Student
// {
//     private:
//     string name;
//     int roll;
//     int age;

//     public:
//     void setname(string s)
//     {
//         name = s;
//     }

//     void setroll(int num)
//     {
        
//         roll = num;
//     }

//     void setage(int date)
//     {
//         age = date;
//     }


//     void getname()
//     {
//         cout<<name<<endl;
//     }

//     int getage(int pin)
//     {
//         if(pin == 123)
//         {
//             return age;
            
//         }
//         else
//         {
//             cout<<"False PIN"<<endl;
//             return 0;
//         }
        
        
//     }

//     void getroll()
//     {
        
//         cout<<roll<<endl;
//     }



// };


// int main()
// {
//     Student s1;

//     s1.setname("Siddhant");
//     s1.setage(18);
//     s1.setroll(3);

//     s1.getname();
//     int ans = s1.getage(133);
//     cout<<ans<<endl;
//     s1.getroll();



// }


// #include<iostream>
// using namespace std;

// class Student
// {
//     int roll;
//     string name;
//     string grade;

//     public:
//     void setname(string s)
//     {
//         name = s;
//     }
//     void setroll(int n)
//     {
//         roll = n;
//     }
//     void setgrade(string marks)
//     {
//         grade = marks;
//     }

//     void getname()
//     {
//         cout<<name<<endl;
//     }
//     void getroll()
//     {
//         cout<<roll<<endl;
//     }
//     void getgrade(int pin)
//     {
//         if(pin == 123)
//         {
//             cout<<grade<<endl;
//         }
//         else
//         {
//             cout<<"Invalid PIN"<<endl;
//         }
//     }

// };


// int main()
// {
//     Student s1;
//     s1.setname("Siddhant");
//     s1.setroll(3);
//     s1.setgrade("A+");

//     s1.getname();
//     s1.getroll();
//     s1.getgrade(133);
// }


// PADDING 

// SIZE OF EMPTY CLASS -> 1
// PADDING GENERALLY IN MULTIPLE , like for char 1, int 4, etc 

// #include<iostream>
// using namespace std;

// class Student
// {
//     char a;
//     int b;    // a * * * b b b b -> 8 bytes
// };


// int main()
// {
//     Student s1;
//     cout<<sizeof(s1);
// }


// #include<iostream>
// using namespace std;

// class Student
// {
//     char a;    // a * * * b b b b c
//     int b; 
//     char c;  // should be 9 but its 12, check if ans is divisble by largest one which is 4, if not choose next largest mulltiple.   
// };


// int main()
// {
//     Student s1;
//     cout<<sizeof(s1);
// }



// #include<iostream>
// using namespace std;

// class Student
// {
//     char a;
//     char b;
//     int c;    // a b * * c c c c -> 8 bytes
// };


// int main()
// {
//     Student s1;
//     cout<<sizeof(s1);
// }


// DYNAMIC MEMORY ALLOCATION

// #include<bits/stdc++.h>
// using namespace std;
// class Car
// {
//     public:
//     int model;
//     string name;
//     int price;
// };

// int main()
// {
//     Car *c1 = new Car; // creating object dynamically

//     (*c1).model = 1;
//     (*c1).name = "Tata";
//     (*c1).price = 100000;

//     cout<<c1->name<<endl;
//     cout<<c1->model<<endl;
//     cout<<c1->price<<endl;


// }

// CONSTRUCTOR


// #include<bits/stdc++.h>
// using namespace std;

// class Customer
// {
//     string name;
//     int balance;
//     int id;

//     public:
//     //DEFAULT CONSTRUCTOR -> NAME SAME AS CLASS NAME
//     Customer()
//     {
//         cout<<"Constructor is called"<<endl;
//     }

//     //PARAMETERIZED CONSTRUCTOR 

//     Customer(string a,int balance, int c)
//     {
//         name = a;
//        this -> balance = balance;
//         id = c;
//     }

//     Customer(string a, int b)    // CONSTRUCTOR OVERLOADING -> SAME NAME WITH DIFFERENT NUMBER OF ARGUMENTS
//     {
//         name = a;
//         balance = b;
//     }

//     // INLINE CONSTRUCTOR

//     inline Customer(string a):name(a){}

//     // COPY CONSTRUCTOR

//     Customer(Customer &C1)
//     {
//         name = C1.name;
//         balance = C1.balance;
//         id = C1.id;

//     }
    

//     void display()
//     {
//         cout<<name<<" "<<balance<<" "<<id<<endl;
//     }

// };


// int main()
// {
//     Customer C1;
//     Customer C2("Siddhant",10000,3);
//     Customer C3("Suyash", 1000);
//     Customer C4("Sparsh");
//     Customer C5(C2); // COPY CONSTRUCTOR
//     C2.display();
//     C3.display();
//     C4.display();
//     C5.display();
//     Customer C6 = C3;
//     C6.display();

// }



// CONSTRUCTOR AND DESTRUCTOR

// #include<bits/stdc++.h>
// using namespace std;

// class Base
// {
//     public:
//     Base()
//     {
//         cout<<"Constructor is called"<<endl;
//     }
//     ~Base()
//     {
//         cout<<"Destructor is called"<<endl;
//     }

// };

// int main()
// {
//     Base B1;

// }



// min and max in an array

// #include<iostream>
// using namespace std;

// void findminmax(int arr[], int n, int &min, int&max)
// {
//     min = max = arr[0];
//     for(int i=1; i<n; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//         if(arr[i]<min)
//         {
//             min = arr[i];
//         }
//     }

// }

// int main()
// {
//     int arr[] = {-2, -5, 0, 0, 10, 15, 27, -13};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int min, max;
//     findminmax(arr,n, min, max);
//     cout<<"Max element is: "<<max<<"  and  "<<"Min element is: "<<min;

// }

// reverse an array

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[], int n)
// {
//     int start =0;
//     int end = n-1;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]); // logic for reversal by using two pointers
//         start++;   // increasing the start pointer
//         end--;    // decreasing the end pointer
//     }
// }


// int main()
// {
//     int arr[] = { -2, -1, 0, 12, 16, 13, 15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,n);
//     // Printing reverse of an array
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

 // Extreme print an array

//  #include<bits/stdc++.h>
//  using namespace std;

//  void extremePrint(int arr[], int n)
//  {
//     int start =0;
//     int end = n-1;
//     while(start<=end)
//     {
//         if(start==end)
//         {
//             cout<<arr[start];
//             break;
//         }
//         cout<<arr[start]<<" "<<arr[end]<<" ";
//         start++;
//         end--;
//     }
//  }

//  int main()
//  {
//     int arr[] = {12, 13,17,1, 2, 34,-2, 0, 2 };
//     int n = sizeof(arr)/sizeof(arr[0]);
//     extremePrint(arr,n);

//  }
 

// Binary search algorithm

// #include<bits/stdc++.h>
// using namespace std;

// int binarysearch(int arr[], int n, int target)
// {
//     int start = 0;
//     int end = n-1;
   
//     while(start<=end)
//     {
//         int mid = start + (end-start)/2;
//         if(arr[mid]==target)
//         {
//             return mid;

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
//     return -1;
// }

// int main()
// {
//     int arr[] = {-9, -4, -2, 1, 2, 3, 4, 5, 6, 7, 12, 13, 15, 19};
    
//     // int n = arr.size();
//     // why can't I use .size in array, -> because size is a member function of vector not raw array, in array i should use this instead :

//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     int target = 17;
//     int result = binarysearch(arr, n, target);
//     if(result==-1)
//     {
//         cout<<"Element not found!!!";
//     }
//     else
//     {
//         cout<<"Element found at index: "<<result;
//     }


// }

// OOPS 

#include<iostream>
using namespace std;



class Student
{
    public:
    string name;
    int roll;
    int standard;

    Student() //Default Constructor
    {

    }
    Student(string n, int r, int s) // Parameterized Constructor
    {
        name = n;
        roll = r;
        standard = s;
    }
    
};

void print(Student s)
{
    cout<<s.name<<" "<<s.roll<<" "<<s.standard<<endl;
}



int main()
{
    Student s1("Ram",12,3);
    Student s2;

    s2.name = "Lallulal";
    s2.roll= 12;
    s2.standard=3;

    //cout<<s1.name<<" "<<s1.roll<<" "<<s1.standard<<endl;
    print(s1);
    print(s2);

    

}