#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    long long ret = 1;
    for(int i=n;i>0;i--){
        ret*=i;
    }
    cout<<ret;
}