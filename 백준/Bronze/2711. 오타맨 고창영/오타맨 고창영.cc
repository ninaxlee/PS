#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l;
    string s;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l>>s;
        for(int j=0;j<s.length();j++){
            if(j==l-1) continue;
            else cout<<s[j];
        }
        cout<<'\n';
    }
}