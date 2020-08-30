#include <iostream>
#include <array>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int findMax[] = {13, 42, 5, 23, 53};
    int n = sizeof(findMax) / sizeof(findMax[0]);
    int ans = *max_element(findMax, findMax + n);
    int ans1 = *max_element(findMax, findMax + (n - 1));
    int ans2 = *max_element(findMax, findMax + (n - 5));
    cout << ans << " " << ans1 << " " << ans2 << " " << n << "\n";
}