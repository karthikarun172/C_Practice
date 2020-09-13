#include <iostream>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> al, vector<int> bo)
{
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < al.size(); i++)
    {
        if (al[i] > bo[i])
        {
            alice++;
        }
        else if (al[i] < bo[i])
        {
            bob++;
        }
    }
    cout << alice << " " << bob << " " << endl;
}
long aVeryBigSum(vector<int> ar)
{
    long ans = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        ans += ar[i];
    }
    return ans;
}
int diagonalDifference(vector<vector<int>> arr)
{
}

int main()
{
    vector<vector<int>> a;

    vector<int> arr;
    vector<int> arr1;

    int a1[] = {1, 2, 3};
    int a2[] = {4, 5, 6};

    for (int i = 0; i < 3; i++)
    {
        arr.push_back(a1[i]);
        arr1.push_back(a2[i]);
    }

    a.push_back(arr);
    a.push_back(arr1);

    for (int i = 0; i < a.size(); i++)
    {
        cout << "sd" << endl;
    }
}