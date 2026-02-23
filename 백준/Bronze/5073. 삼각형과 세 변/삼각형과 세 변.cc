#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true){
        int arr[3];
        for(int i=0;i<3;i++) cin>>arr[i];
        if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[1]==0) return 0;
        sort(arr, arr+3);
    
        if(arr[0]+arr[1]<=arr[2]) {
            cout<<"Invalid\n";
            continue;
        }
        
        if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[0]==arr[2]){
            cout<<"Equilateral\n";
            continue;
        }
        else if((arr[0]==arr[1]&&arr[1]!=arr[2]) || (arr[0]!=arr[1]&&arr[1]==arr[2])){
            cout<<"Isosceles\n";
            continue;
        }
        else cout<<"Scalene\n";
    }
}