#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={3,5,8,15,19};
    int x = 1;
    int low = 0; 
    int high = arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    auto lb = upper_bound(arr.begin(), arr.end(), x);
    int res =lb - arr.begin();
    cout<<res<<" "; 
    cout<<ans;
}