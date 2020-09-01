#include <iostream>

using namespace std;

int main()
{
    int a, b, n = 0;
    string str[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;

    if ((a <= 9) && (b <= 9))
    {
        for (int i = a; i < b; ++i)
        {
            cout << str[i - 1] << endl;
        }
    }
    else if ((a <= 9) && (b > 9))
    {
        for (int i = a; i <= 9; ++i)
        {
            cout << str[i - 1] << endl;
        }
        for (int i = 10; i <= b; ++i)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
    else
    {
        for (int i = a; i < b; ++i)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
}