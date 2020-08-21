#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    str.push_back('S');
    cout << "the initial String is : " << str << endl;
    str.pop_back();
    cout << "the initial String is : " << str << endl;

    string val = "hello people this is arun karthik";
    val.resize(10);
    cout << "the capacity is : " << val.capacity() << "\n";

    val.shrink_to_fit();
    cout << "the capacity now is :" << val << val.length() << endl;

    string loop = "arun karthik";

    std::string::iterator it;
    std::string::reverse_iterator it1;

    cout << "this string used for forward itrator is: ";
    for (it = loop.begin(); it != loop.end(); it++)
        cout << *it << endl;

    for (it1 = loop.rbegin(); it1 != loop.rend(); it1++)
        cout << *it1 << endl;
}
