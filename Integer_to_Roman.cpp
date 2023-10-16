#include<bits/stdc++.h>
using namespace std;

// All combination possibles:
//  M  - 1000
//  CM - 900
//  D  - 500 
//  CD - 400
//  C  - 100
//  XC - 90
//  L  - 50
//  XL - 40
//  X  - 10
//  IX - 9
//  V  - 5
//  IV - 4
//  I  - 1

string intToRoman(int n){
    vector<int> value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> code = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string res="";
    for(int i=0;i<value.size();i++){
        while(n>=value[i]){
            res += code[i];
            n -= value[i];
        }
    }

    return res;
}

int main(){
    int n;
    cin>>n;

    cout<<intToRoman(n);
}