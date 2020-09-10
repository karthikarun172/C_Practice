  #include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i < 10; i++)
        // push_back
        v.push_back(i);

    vector<int>::iterator it;

    // begin rbegin crbegin , end rend crend
    for (it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    //pop_back
    v.pop_back();
    vector<int>::iterator it1;

    for (it1 = v.begin(); it1 != v.end(); ++it1)
        cout << ' ' << *it1;
    cout << '\n';

    cout << "size: " << v.size() << endl;
    cout << "Max_size: " << v.max_size() << endl;
    v.resize(20);
    cout << "size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Empty: " << v.empty() << endl;
    v.reserve(100);
    cout << "size: " << v.size() << endl;
    v.shrink_to_fit();
    cout << "size: " << v.size() << endl;

    return 0;
}