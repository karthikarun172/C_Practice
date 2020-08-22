#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 5> myarray = {1, 3, 4, 5, 6};

    // begin rbegin crbegin , end rend crend
    for (auto i = myarray.begin(); i != myarray.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "Size: " << myarray.size() << endl;
    cout << "Max_Size: " << myarray.max_size() << endl;
    cout << "empty: " << myarray.empty() << endl;
    cout << "at: 2 " << myarray.at(2) << endl;
    cout << "front: " << myarray.front() << endl;
    cout << "back:  " << myarray.back() << endl;
    cout << "data:  " << myarray.data() << endl;

    array<int, 10> counter;
    counter.fill(0);
    for (auto i = counter.begin(); i != counter.end(); i++)
        cout << "|" << *i << endl;

    array<int, 5> first = {11, 12, 13, 14, 15};
    array<int, 5> second = {1, 2, 3, 4, 5};

    first.swap(second);
    cout << "Swap"
         << "\n";

    for (int x : first)
        cout << " " << x;

    cout << "\n";

    for (int x : second)
        cout << " " << x;
    cout << "\n";

    int myElement = get<3>(second);
    cout << myElement << endl;
}