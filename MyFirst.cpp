#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string::iterator let;

    string str = "hello mothalais";

    for (let = str.begin(); let != str.end(); let++)
        cout << &let << " : " << *let << endl;

    string str1 = "arun karthik";
    string str2 = "gokul madhavan";

    char ch[80];
    str1.copy(ch, 6, 0);
    str1.swap(str2);
    cout << ch << endl;
    cout << str1 << endl;
}