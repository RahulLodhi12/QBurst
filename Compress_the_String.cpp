#include<bits/stdc++.h>
using namespace std;

string compressString(string s){
    int cnt=0;
    string ans = "";
    char ch = s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==ch){ //matching
            cnt++;
        }
        else{ //not matching
            ans += ch+to_string(cnt);
            ch = s[i];
            cnt=1;
        }
    }
    //For last part of string
    ans += ch+to_string(cnt);

    return ans;
}

int main(){
    string s;
    getline(cin,s);

    cout<<compressString(s);
}