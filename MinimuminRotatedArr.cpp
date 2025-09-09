#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr ={7,8,9,1,2,3,4,5};
    vector<int> arr = {3,4,5,1,2};
    int n = arr.size();
    int low = 0; 
    int high = n-1;
    int mini = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            mini  = min(mini, arr[low]);
            low++;
            high--;
            continue;
        }
        if(arr[low] <= arr[mid]){
            mini = min(mini , arr[low]);
            low = mid+1;
        }
        else{
            high = mid - 1;
            mini = min(mini , arr[mid]);
        }
    }
    cout<<mini;
}