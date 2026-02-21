#include <iostream>
using namespace std;

int main()
{
    int n;
    string k;
    cin>>n>>k;
    
    int even = 0;
    int odd = 0;
    
    for(int i=0;i<n;i++){
        int num = k[i]-'0';
        
        if(num==0 || num%2==0) even++;
        else odd++;
    }
    
    if(even>odd) cout<<0;
    else if(even<odd) cout<<1;
    else cout<<-1;
}