#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> p;
    
    int n, begin, end;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>begin>>end;
        p.push_back({end, begin});
    }
    
    sort(p.begin(), p.end()); // 끝나는 시간 순서 배치
    
    int now = p[0].first;
    int ret = 1;
    
    for(int i=1;i<n;i++){
        if(now<=p[i].second) { // 다음 회의 시작 시간이 지금 시간보다 크거나 같으면 회의 가능
            ret++;
            now = p[i].first;
        }
    }
    
    cout<<ret;
}