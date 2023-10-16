// Given an integer array arr, return the length of the longest strictly increasing subsequence
#include<bits/stdc++.h>
using namespace std;

int longLength(vector<int>& arr){
    int maxLen = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]<arr[j]){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    cout<<longLength(arr);
}