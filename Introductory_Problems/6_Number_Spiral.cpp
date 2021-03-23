#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    //even layer downward
    //odd layer upward
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long x,y;
        cin>>x>>y;
        long long z=max(x,y);
        if(z%2==0){
            //  1  2  9 10 25
            //  4  3  8 11 24 
            //  5  6  7 12 23
            // 16 15 14 13 22
            // 17 18 19 20 21    
            // 1,1+3,1+3+5,
            // 1 4 9 16 n^2
            if(x==y)
            cout<<(z-1)*(z-1)+x<<"\n";
            else if(x>y)
            cout<<(z)*(z)-y+1<<"\n";
            else 
            cout<<(z-1)*(z-1)+x<<"\n";
        }else{
            if(x==y)
            cout<<(z-1)*(z-1)+x<<"\n";
            else if(x>y)
            cout<<(z-1)*(z-1)+y<<"\n";
            else 
            cout<<(z)*(z)-x+1<<"\n";
        }
    }
    return 0;
}