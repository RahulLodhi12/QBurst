#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter password: ";
    cin>>s;

    bool valid = true;
    
    int num = 0;
    int sp = 0;
    
    if(s.size()<8){
        valid = false;
    }
    if(!(s[0]>='A' && s[0]<='Z')){
        valid = false;
    }


    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            num++;
        }
        if(s[i]=='@' || s[i]=='$' || s[i]=='%' || s[i]=='&'){
            sp++;
        }
    }
    
    if(num<1){
        valid = false;
    }
    if(sp<1){
        valid = false;
    }

    if(valid){
        cout<<"Valid Password"<<endl;
    }
    else{
        cout<<"Not Valid Password"<<endl;
    }
}