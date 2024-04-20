#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {20, 4, 15, 2, 6, 2};
    int start = 0;
    int end = 5;
    while (start <= end)
    {
        if (start == end)
            cout << arr[start] << " ";
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}