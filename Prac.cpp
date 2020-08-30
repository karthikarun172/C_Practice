#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <array>

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
int findA(string val)
{
    int count = 0;
    for (int i = 0; i < val.length() - 1; i++)
    {
        if (val.substr(i, 2) == "aa")
        {
            count++;
        }
    }
    return count;
}

bool A_Occ(string str)
{
    int counter = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 'a')
            counter++;
        if (str.substr(i, 2) == "aa" && counter < 2)
            return true;
    }
    return false;
}

string OddString(string val)
{
    string res = "";
    for (int i = 0; i < val.length(); i++)
    {
        cout << i << endl;
        if (i % 2 == 0)
            res += val[i];
    }
    return res;
}
string strAdd(string val)
{

    string res = "";
    for (int i = 0; i < val.length(); i++)
    {
        res += val.substr(0, i + 1);
    }
    return res;
}
int twoStr(string val)
{
    string str = val.substr(val.length() - 2, val.length());
    int count = 0;
    for (int i = 0; i < val.length() - 2; i++)
    {
        if (val.substr(i, 2) == str)
        {
            count++;
        }
    }
    return count;
}
bool Order_num(int x[], int length)
{

    for (int i = 2; i < length; i++)
    {
        if (x[i] == 3 && x[i - 1] == 2 && x[i - 2] == 1)
        {
            return true;
        }
    }
    return false;
}
int TwoStrComp(string a, string b)
{
    int count = 0;
    for (int i = 0; i < a.length() - 1; i++)
    {
        for (int j = 0; j < b.length() - 1; j++)
        {
            if (a.substr(i, 2) == b.substr(j, 2))
            {
                count += 1;
            }
        }
    }
    return count;
}

string RemoveStr1(string a, char b)
{

    string res = "";
    for (int i = 1; i < a.length() - 1; i++)
    {
        if (a[i] != b)
        {
            res += a[i];
        }
    }
    string ans = a[0] + res + a[a.length() - 1];
    return ans;
}

string RemoveStr2(string a)
{
    string res = "";
    for (int i = 0; i < a.length(); i += 4)
    {
        res += a.substr(i, 2);
    }
    return res;
}
int IntCout(int a[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] == 5 && (a[i + 1] == 5 || a[i + 1] == 6))
        {
            count += 1;
        }
    }
    return count;
}

bool Triplet(int a[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i + 1] == i && a[i + 2] == i)
        {
            count++;
        }
    }
    return count > 0 ? true : false;
}

int SumInClusive(int a, int b)
{
    return a + b >= 10 && a + b <= 20 ? 30 : a + b;
}

int five(int a, int b)
{
    return (a == 5 || b == 5) ? 5 : (a + b == 5 || a - b == 5 ? 5 : 0);
}

bool Thirteen(int a)
{
    return a % 13 == 0 || (a - 1) % 13 == 0 ? true : false;
}
bool fizzBuzz(int a)
{
    return (a % 3 == 0 and a % 7 == 0) ? false : true;
}

bool TenMultiple(int a)
{
    return ((a + 2) % 10 == 0 || (a + 1) % 10 == 0 || (a - 1) % 10 == 0 || (a - 2) % 10 == 0) ? true : false;
}

int main()
{
    cout << TenMultiple(21) << endl;
    return 0;
}
