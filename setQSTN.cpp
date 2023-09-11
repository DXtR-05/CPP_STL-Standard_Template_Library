#include <bits/stdc++.h>
using namespace std;

// hackerrank question --> monk and the magical candy bags

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long cnt;
            cin >> cnt;
            bags.insert(cnt);
        }
        long long total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long cnt = *last_it;
            total_candies += cnt;
            bags.erase(last_it);
            bags.insert(cnt / 2);
        }
        cout << total_candies << endl;
    }
}