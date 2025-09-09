#include<bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> arr = {3,4,5,1,2};
    int n = arr.size();
    int low = 0; 
    int high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                index = low;
                ans= arr[low];
            }
            low = mid+1;
        }
        else{
            if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }
            high = mid-1;
        }
    }
    cout<<index<<" "<<ans;
 }