#ifndef DEBUG_H
#define DEBUG_H 1
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#ifndef CLown1331
#define debug(...) 0
#define ASSERT(...) 0
#define dbg(...) 0
#endif
#endif // DEBUG_H
#ifndef solution_h
#define solution_h 1
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <utility>
#include <vector>
namespace solution
{
using namespace std;
using ll = long long;
using ull = long long;
const int sz = 2e5 + 105;
const int mod = 1e9 + 7;
struct Solution
{
    void Solve()
    {
        ll x;
        cin >> x;
        bool is_power_of_2 = (x & (x - 1)) == 0;
        cout << (is_power_of_2 ? "TAK" : "NIE") << endl;
    }
};
} // namespace solution
#endif // solution_h
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    solution::Solution solution;
    solution.Solve();
    return 0;
}
