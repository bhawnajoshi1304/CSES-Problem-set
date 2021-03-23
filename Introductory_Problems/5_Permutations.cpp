#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==2||n==3){
        cout<<"NO SOLUTION\n";
    }else{
        for(long long i=3;i<=n;i+=3)
        cout<<i<<" ";
        for(long long i=1;i<=n;i+=3)
        cout<<i<<" ";
        for(long long i=2;i<=n;i+=3)
        cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}