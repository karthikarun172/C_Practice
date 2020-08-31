#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr;
    int ar[] = {1, 22, 33, 53, 6, 3, 63};
    int length = sizeof(ar) / sizeof(ar[0]);

    arr.assign(ar, ar + length);
    int i = 2;
    arr.insert(arr.begin() + i, 23222);
    arr.erase(arr.end() - 1);
    for (int e : arr)
    {
        cout << e << ' ';
    }

    return 0;
}