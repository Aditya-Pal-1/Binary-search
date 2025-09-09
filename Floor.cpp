#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int target = 9;
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans;
    while(low <= high){
        int mid = (low+high) / 2 ;
        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans;
}