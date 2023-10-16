// Q. Given a string s, perform the following operations and return the modified string.

// First, we need to reverse each individual word in the given String.
// In step 2, we need to replace Even index Characters with Uppercase & Odd index Characters with Lowercase.
// In step 3, we need to replace the Even index space with #, and the Odd index space with *
// In step 4, any other characters in the Even index we need to replace with @ and any other Characters in Odd Index are replaced with :

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    // Reverse Each words of sentence.
    stack<char> st;
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(s[i] != ' '){
            st.push(s[i]);
        }
        else{
            while(st.empty()==0){
                ans += st.top();
                st.pop();
            }
            ans += " ";
        }
    }

    while(st.empty()==0){
        ans += st.top();
        st.pop();
    }

    // cout<<ans<<endl;

    //modify ans string
    for(int i=0;i<ans.length();i++){
        if(i%2 == 0){//even
            if(ans[i]>='a' && ans[i]<='z'){
                ans[i] = ans[i] + 'A' - 'a';
            }
            else if(ans[i] == ' '){
                ans[i] = '#';
            }
            else if(!(ans[i]>='A' && ans[i]<='Z')){
                ans[i] = '@';
            }
        }
        else{//odd
            if(ans[i]>='A' && ans[i]<='Z'){
                ans[i] = ans[i] + 'a' - 'A';
            }
            else if(ans[i] == ' '){
                ans[i] = '*';
            }
            else if(!(ans[i]>='a' && ans[i]<='z')){
                ans[i] = ':';
            }
        }
    }

    cout<<ans<<endl;

}