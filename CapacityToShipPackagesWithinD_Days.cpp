#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& weight, int cap){
    int dayCnt=1;
    int load=0;
    for(int i=0;i<weight.size();i++){
        if(load + weight[i]<=cap){
            load += weight[i];
        }
        else{
            dayCnt++;
            load = weight[i]; //new load for next day.
        }
    }

    return dayCnt;
}

// Approach 1: Brute force
int leastCapacity(vector<int>& weight, int d){
    int maxi = *max_element(weight.begin(),weight.end());
    int sum = accumulate(weight.begin(),weight.end(),0);

    for(int cap=maxi;cap<=sum;cap++){
        int dayCalc = func(weight,cap);

        if(dayCalc<=d){
            return cap;
        }
    }

    return -1;
}

// Approach 2: Binary Search
int leastCapacity2(vector<int>& weight, int d){
    int low = *max_element(weight.begin(),weight.end());
    int high = accumulate(weight.begin(),weight.end(),0);

    while(low<=high){
            int mid = (low+high)/2;
            int dayCal = func(weight,mid);
            if(dayCal<=d){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    return low;
}


int main(){
    int n;
    cin>>n;

    vector<int> weight;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        weight.push_back(t);
    }

    int d;
    cin>>d;

    // cout<<leastCapacity(weight,d);
    cout<<func(weight,9);
}