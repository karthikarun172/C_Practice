#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfNumbers(int y)
{
    int x, sum = 0;
    for (x = 1; x < y + 1; x++)
    {
        cout << x << "   ";
        sum = sum + x;
    }
    return sum;
}

void PrimeNumber(int x)
{
    int count = 0;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "the number is not prime" << endl;
    }
}

int factorial(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
        fac *= i;
    }
    return fac;
}

int GCD(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return GCD(y, x % y);
    }
}

int GCDinLoop(int x, int y)
{
    int ans = 0;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
}