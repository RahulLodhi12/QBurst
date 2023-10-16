// Replace all repeating characters in an input sentence with asterisks
#include<bits/stdc++.h>
using namespace std;

void replaceChar(string &s){
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i] == s[j]){
                s[i] = '*';
                s[j] = '*';
            }
        }
    }

}

int main(){
    string s;
    getline(cin,s);

    replaceChar(s);

    cout<<s;
}