#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, num;
    cin>>n;
    stack<pair<int, int>> s;

    long long ret = 0;
    
    for(int i=0;i<n;i++){
        cin>>num;
        
        int cnt = 1;
        while(!s.empty() && s.top().first<=num) {
            ret += s.top().second;
            if(s.top().first==num) cnt+=s.top().second;
            s.pop();
        }
        if(!s.empty()) ret++;
        s.push({num, cnt});
    }
    
    cout<<ret;
}