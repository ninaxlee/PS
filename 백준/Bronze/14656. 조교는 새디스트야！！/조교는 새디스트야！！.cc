#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    vector<int> tmp;
    
    
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    
    tmp = v;
    int ret = 0;
    sort(tmp.begin(), tmp.end());
    
    for(int i=0;i<n;i++){
        if(v[i]!=tmp[i]) ret++;
    }
    cout<<ret;
}