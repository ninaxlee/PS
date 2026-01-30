#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    long long ret = 0;
    string cal = "";
    while(cin>>x){
        if(x=="="){
            cout<<ret;
            return 0;
        }
        
        if(x=="+" || x=="-" || x=="*" || x=="/") cal = x;
        
        else{
            if(cal == "") ret += stoi(x);
            else if(cal == "+") ret +=stoi(x);
            else if (cal == "-") ret -=stoi(x);
            else if (cal == "*") ret*=stoi(x);
            else ret/=stoi(x);
            
            cal = "";
        }
    }
}