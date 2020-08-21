#include <iostream>
#include <string>

using namespace std;

int main()
{
    string iop;
    // INPUT FUNCTIONS
    //the string methords are

    // get the line
    getline(cin, iop);
    cout << "the input line methord: " << iop << endl;

    // get only char to the end
    iop.push_back('s');
    cout << iop << endl;

    // pop the last char
    iop.pop_back();
    cout << iop << endl;

    // CAPACITY FUNCTIONS
    iop.capacity();
    iop.resize(12);
    iop.length();
    iop.shrink_to_fit();

    //ITRATOR FUNCTIONS
    std::string::iterator name;
    std::string::iterator name1;

    for (name = iop.begin(); name != iop.end(); name++)
        cout << *name << endl;

    for (name1 = iop.begin(); name1 != iop.end(); name1++)
        cout << *name1 << endl;

    //MANIPULATE FUNCTION
    char ch[80];
    iop.copy(ch, 4, 0);
    cout << ch << endl;

    string swapping = "this is to swap iop";
    iop.swap(swapping);
    cout << iop << endl;

}