#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter number in string datatype: ";
    cin>>s;

    int sum = s[s.size()-1]-'0' + s[s.size()-2]-'0';

    cout<<sum<<endl;

    if(sum == 3 || sum == 8){
        cout<<"Lucky Winner"<<endl;
    }
    else{
        cout<<"Not Lucky Winner"<<endl;
    }
}