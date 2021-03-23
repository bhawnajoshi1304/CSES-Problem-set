#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m, k;
    cin >> n >> m >> k;
    long long ans = 0;
    vector<long long> a(n), b(m);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < m; i++)
    {
        cin >> b[i];
        long long x = -k;
        while (x <= k)
        {
            vector<long long>::iterator it = find(a.begin(), a.end(), b[i] + x);
            if (it == a.end())
                x += 1;
            else
            {
                a.erase(it);
                break;
            }
        }
    }
    cout << n - a.size() << "\n";
    return 0;
}