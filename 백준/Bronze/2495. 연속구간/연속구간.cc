#include <iostream>
using namespace std;

int main()
{
    string s;
    int before;
    int t = 3;
    int ret = 1;
    int m = 0;
    while(t--){
        cin>>s;
        before = s[0]-'0';
        
        for(int i=1;i<s.length();i++){
            if(before==(s[i]-'0')){
                ret++;
            }
            else ret = 1;
            m = max(m, ret);
            before = s[i]-'0';
        }
        
        cout<<m<<'\n';
        ret = 1;
        m = 0;
    }
}