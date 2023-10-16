#include<bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s){
    int l=0,r=0,res=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='L') l++;
        else r++;
        if(l==r) res++;
    }

    return res;
}

int main(){
    string s;
    getline(cin,s);

    cout<<balancedStringSplit(s);
}