#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, num;
    cin>>n;
    stack<pair<int, int>> s;
    s.push({100000001, 0});
    
    for(int i=1;i<=n;i++){
        cin>>num;
        while(s.top().first < num){
            s.pop();
        }
        cout<<s.top().second<<" ";
        s.push({num, i});
    }
}