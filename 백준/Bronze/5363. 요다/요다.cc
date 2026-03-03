#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++){
        string s;
        getline(cin, s);
        
        int space1 = s.find(' ');
        int space2 = s.find(' ', space1+1);
        
        string first = s.substr(0, space1);
        string second = s.substr(space1+1, space2-space1-1);
        
        cout<<s.substr(space2+1)<<" "<<first<<" "<<second<<'\n';
    }
}