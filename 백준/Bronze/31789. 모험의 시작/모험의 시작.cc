#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x, s, c, p;
    
    cin>>n;
    cin>>x>>s;
    for(int i=0;i<n;i++){
        cin>>c>>p;
        if(c<=x && s < p){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}