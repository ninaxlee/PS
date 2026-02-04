#include <iostream>
using namespace std;

int main()
{
    int n, ret = 0;
    cin>>n;
    
    if(n<100){
        cout<<n;
        return 0;
    }
    
    ret += 99;
    
    for(int i=100;i<=n;i++){
        int h, t, o;
        h = i/100;
        t = (i%100)/10;
        o = i%10;
        
        if(t-h == o-t) ret++;
    }
    
    cout<<ret;
}