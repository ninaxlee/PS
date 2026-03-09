#include <iostream>
using namespace std;

int main(){
    long long sum=0;
    long long n, c, t;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>c;
            sum = (sum+c)%n;
        }
        
        if(sum%n==0) cout<<"YES\n";
        else cout<<"NO\n";
        
        sum=0;
    }
    
    
}