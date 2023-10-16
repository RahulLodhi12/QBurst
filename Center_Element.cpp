#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr+n); // O(N*logN)

    int ans;
    if(n%2==0){
        ans = (arr[n/2] + arr[n/2 - 1])/2;
    }
    else{
        ans = arr[n/2];
    }

    cout<<ans<<endl;
}