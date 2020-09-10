#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// int findLowerBound(vector<int> arr, int num)
// {
//     int ar[] = {1, 1, 2, 2, 6, 9, 9, 15};
//     int length = sizeof(ar) / sizeof(ar[0]);
//     vector<int> arr;
//     for (int i = 0; i < length; i++)
//     {
//         arr.push_back(ar[i]);
//     }
//     std::vector<int>::iterator a;

//     cout << "enter the lower bound" << endl;
//     int T, Q;
//     cin >> T;

//     for (int i = 0; i < T; i++)
//     {
//         cin >> Q;
//         a = lower_bound(arr.begin(), arr.end(), Q);
//         int ans = (a + 1 - arr.begin());
//         if (arr[ans - 1] == Q)
//         {
//             cout << "Yes " << ans << endl;
//         }
//         else
//         {
//             cout << "No " << ans << endl;
//         }
//     }
// }

int Set_Operation()
{
}
int main()
{
    set<int> arr;
    int q, t, val;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> t >> val;
    }
    for (int i = 0; i < q; i++)
    {
        if (t == 1)
        {
            arr.insert(val);
        }
        else if (t == 2)
        {
            arr.erase(val);
        }
        else if (t == 3)
        {
            arr.find(val) == arr.end() ? cout << "No" << endl : cout << "Yes" << endl;
        }
    }
}
