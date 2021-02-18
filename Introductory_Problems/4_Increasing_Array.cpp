#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long ans = 0;
    vector<long long> l(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> l[i];
        if (i > 0 && l[i] < l[i - 1])
        {
            ans += l[i - 1] - l[i];
            l[i] = l[i - 1];
        }
    }
    cout << ans << "\n";
    return 0;
}