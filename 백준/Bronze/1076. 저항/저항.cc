#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ret = 1;
    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    int res[3] = {0};
    string tmp;
    for(int i=0;i<3;i++){
        cin>>tmp;
        for(int j=0;j<10;j++){
            if(color[j]==tmp){
                res[i]=j;
            }
        }
    }
    
    ret = res[0]*10;
    ret += res[1];
    ret *= pow(10, res[2]);
    
    cout<<ret;
    
}