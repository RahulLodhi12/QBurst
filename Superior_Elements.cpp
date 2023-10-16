// Superior Element, if it is greater than all the elements present to its right.
#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&arr) {
    vector<int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    return ans;
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

    vector<int> ans = superiorElements(arr);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}