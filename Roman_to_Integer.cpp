#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    map<char,int> mpp;
    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;
    int n = s.length()-2;
    int res = mpp[s[s.length()-1]];
    for(int i=n;i>=0;i--){
        if(mpp[s[i]]<mpp[s[i+1]]){
            res = res - mpp[s[i]];
        }
        else if(mpp[s[i]]>=mpp[s[i+1]]){
            res = res + mpp[s[i]];
        }
    }

    return res;
}

int main(){
    string s;
    getline(cin,s);

    cout<<romanToInt(s);
}