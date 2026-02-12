#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin>>a>>b>>c;
    
    if(a+b>=2*c) {
        cout<<a+b-2*c;
    } else cout<<a+b;
}