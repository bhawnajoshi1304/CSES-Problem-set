#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    long long count = 0, tmp = 1;
    cin >> s;
    for (long long i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            tmp += 1;
        else if (tmp > count)
        {
            count = tmp;
            tmp = 1;
        }
        else
            tmp = 1;
    }
    if (tmp > count)
        count = tmp;
    cout << count << "\n";
    return 0;
}