#include <iostream>
#include <vector>
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
    }
    return 0;
}