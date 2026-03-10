#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ret = 999999;
    cin>>n;
    
    string s;
    cin>>s;
    
    for(int i=0;i<=n-5;i++){
        int sum = 0;
        if(s[i]!='e') sum++;
        if(s[i+1]!='a') sum++;
        if(s[i+2]!='g') sum++;
        if(s[i+3]!='l') sum++;
        if(s[i+4]!='e') sum++;
        
        ret = min(ret, sum);
    }
    
    cout<<ret;
}