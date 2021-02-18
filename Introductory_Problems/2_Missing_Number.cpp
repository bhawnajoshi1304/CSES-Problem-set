#include <iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    long long ans=n*(n+1)/2;
    vector<long long> l(n);
    for(long long i=0;i<n-1;i++)
        {
            cin >> l[i];
            ans-=l[i];
        }
        cout<<ans<<"\n";
    return 0;
}