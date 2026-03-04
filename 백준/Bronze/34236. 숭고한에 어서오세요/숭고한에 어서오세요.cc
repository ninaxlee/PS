#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int before, after=0;
    int t;
    
    for(int i=0;i<n;i++){
        before = after;
        cin>>after;
    }
    
    t = after-before;
    cout<<after+t;
}