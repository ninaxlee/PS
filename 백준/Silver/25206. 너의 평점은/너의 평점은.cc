#include <bits/stdc++.h>
using namespace std;
map<string, double> m = {
    {"A+", 4.5}, {"A0", 4.0},
    {"B+", 3.5}, {"B0", 3.0},
    {"C+", 2.5}, {"C0", 2.0},
    {"D+", 1.5}, {"D0", 1.0},
    {"F", 0.0}
};

int main()
{
    int cnt = 0;
    double ret = 0;
    for(int i=0;i<20;i++){
        string lec, grade;
        double score;
        
        cin>>lec>>score>>grade;
        
        if(grade == "P") continue;
        
        cnt+=score;
        
        ret += score * m[grade];
        
    }
    
    printf("%.20f", ret/cnt);
}