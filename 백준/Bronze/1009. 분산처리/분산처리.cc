#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        long long ret = 1;
        
        for(int j=0;j<b;j++){
            ret = (ret*a)%10;
        }
        
        cout<<(ret == 0 ? 10 : ret)<<'\n';
    }
}