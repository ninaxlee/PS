#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, num, cnt = 1;
    cin>>n;
    
    stack<int> s;
    queue<char> q;
    
    while(n--) {
        cin>>num;
        
        while(cnt<=num){
            s.push(cnt++);
            q.push('+');
        }
        
        if(s.top() != num){
            cout<<"NO";
            return 0;
        }
        
        s.pop();
        q.push('-');
    }
    
    while(!q.empty()){
        cout<<q.front()<<'\n';
        q.pop();
    }
}