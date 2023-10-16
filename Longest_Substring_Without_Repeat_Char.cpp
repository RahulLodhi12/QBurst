// Longest Substring Without Repeating Characters
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_set<char> st;
    int left = 0;

    int maxLen = 0;
    for(int right=0;right<s.length();right++){
        if(st.count(s[right])==0){
            st.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        else{
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]); //when count is zero insert that character.
        }
    }
    return maxLen;
}

int main(){
    string s;
    getline(cin,s);

    cout<<lengthOfLongestSubstring(s);
}