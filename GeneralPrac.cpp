#include <iostream>
#include <string>

using namespace std;

void print(string x)
{
    cout << x << endl;
}

int main()
{
    string iop;

    cout << "enter the string you have to enter: " << endl;
    getline(cin, iop);

    iop.push_back('r');

    iop.pop_back();

    iop.capacity();
    iop.resize(4);
    iop.length();
    iop.shrink_to_fit();

    std::string::iterator num;
    std::string::iterator num2;

    for (num = iop.begin(); num != iop.end(); num++)
        cout << *num << endl;
}