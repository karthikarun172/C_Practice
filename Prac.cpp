#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

string stringManu(string x)
{
    return x.length() > 2 && x.substr(0, 2) == "if" ? x : "if " + x;
}

string RemoveStr(string x, int y)
{
    return x.erase(y, 1);
}
string SwapFL(string x)
{
    return x.length() > 2 ? x.substr(x.length() - 1) + x.substr(1, x.length() - 2) + x.substr(0, 1) : x;
}

string FrontCopies(string x)
{
    return x.length() > 2 ? x.substr(0, 2) + x.substr(0, 2) + x.substr(0, 2) + x.substr(0, 2) : x;
}

string LastChar(string x)
{
    string s = x.substr(x.length() - 1);
    return s + x + s;
}
int three7Mult(int x)
{
    return (x % 3) == 0 || (x % 7) == 0 ? true : false;
}
string lastThreeChar(string x)
{
    string s = x.substr(0, 3);
    return s + x + s;
}

bool cSharp(string str)
{
    bool val = str.substr(0, 2) == "C#" ? true : false;
    return val;
}
int TempCheck(int x, int y)
{
    return (x < 0 && y > 100) || (x > 100 && y < 0) ? true : false;
}

int eitherRange(int x, int y)
{
    return (x >= 100 && x <= 200) && (y >= 100 && y <= 200) ? true : false;
}
int anyRange(int x, int y, int z)
{
    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50) ? true : false;
}
string ytCheck(string x)
{
    return x.substr(1, 2) == "yt" ? x.erase(1, 2) : x;
}
int largestNum(int x, int y, int z)
{
    return max(x, max(y, z));
}

int nearestValue(int x, int y)
{
    int val1 = abs(100 - x);
    int val2 = abs(100 - y);

    return val1 == val2 ? 0 : (val1 > val2 ? y : x);
}
int CtoF(int x)
{
    return x + 32;
}

int greaterThan(int x, int y)
{
    return (x >= 20 && x <= 30) && (y <= 30 && y >= 20) ? (x > y ? x : y) : 0;
}

bool Zazz(string val)
{
    int count = 0;

    for (int i = 0; i < val.length(); i++)
    {
        if (val[i] == 'z' || val[i] == 'Z')
        {
            count++;
        }
    }
    return count > 1 && count < 4;
}
bool lastDigit(int x, int y)
{
    return to_string(x).back() == to_string(y).back() ? true : false;
}

string JSTimes(string x, int y)
{
    string result = "";
    for (int i = 0; i < y; i++)
    {
        result += x;
    }
    return result;
}

string JST3Times(string x, int y)
{
    string val = x.substr(0, 3);
    string result = "";
    for (int i = 0; i < y; i++)
    {
        result += val;
    }
    return result;
}

int main()
{
    cout << JST3Times("Python", 3) << endl;
    return 0;
}
