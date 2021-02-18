#include <iostream>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long ans = 0;
    set<long long> l;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        l.insert(temp);
    }
    cout << l.size() << "\n";
    return 0;
}