#include <iostream>
using namespace std;

int main(){
    bool used[101]={false};
    
    int n;
    cin>>n;
    int com, ret = 0;
    
    for(int i=0;i<n;i++){
        cin>>com;
        if(used[com]==true) ret++;
        used[com]=true;
    }
    cout<<ret;
}