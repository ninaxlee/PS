#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int k, num, ret = 0;
    stack<int> s;
    cin>>k;
    
    for(int i=0;i<k;i++){
        cin>>num;
        if(num==0) s.pop();
        else s.push(num);
    }
    
    while(!s.empty()){
        ret += s.top();
        s.pop();
    }
    
    cout<<ret;
}