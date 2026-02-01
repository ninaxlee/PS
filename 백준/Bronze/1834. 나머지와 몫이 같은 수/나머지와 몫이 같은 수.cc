#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ret = 0;
    
    for(long long i=1;i<n;i++){
        ret+=i*n+i;
    }
    cout<<ret;
}