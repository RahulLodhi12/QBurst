#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagram(vector<string> &str){
    vector<vector<string>> ans;
    map<string,vector<string>> mpp;

    for(auto it: str){
        string orig = it;
        sort(it.begin(),it.end()); //sorting
        mpp[it].push_back(orig);
    }

    for(auto it: mpp){
        ans.push_back(it.second);
    }

    return ans;
}

int main(){
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagram(str);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
}