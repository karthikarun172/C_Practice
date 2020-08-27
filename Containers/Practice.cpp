#include <iostream>
#include <array>

using namespace std;

int main()
{
    cout << "Arry Practice" << endl;
    array<int, 10> arr = {1, 2, 3, 4, 5, 6};

    for (auto i = arr.begin(); i != arr.end(); i++)
        cout << " " << *i;
    cout << "\n";

    for (int i : arr)
        cout << " " << i * 3;
    cout << "\n";

    cout << "Size: " << arr.size() << endl;
    cout << "Max_Size: " << arr.max_size() << endl;
    cout << "at: " << arr.at(2) << endl;
    cout << "front: " << arr.front() << endl;
    cout << "back: " << arr.back() << endl;

    array<int, 5> first = {324, 523, 324, 54};
    array<int, 5> second = {12, 32, 41, 53, 34};
    first.swap(second);
    for (int i : first)
        cout << " " << i;

    cout << "\n";
}