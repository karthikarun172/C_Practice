#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; ++i)
    {
        arr[i] * 2;
    }
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
}