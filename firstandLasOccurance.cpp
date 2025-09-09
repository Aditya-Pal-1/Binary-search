#include<bits/stdc++.h>
using namespace std;
int lb(vector<int> arr, int a,int n, int target){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int ub(vector<int> arr, int a,int n, int target){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3,4,13,13,13,20,40};
    int n  = arr.size();
    int first = -1;
    int target = 25;
    int last = -1;
    // Brute force
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            if(first == -1){
                first = i;
            }
            else{
                last = i;
            }
        }
    }
    int f1 = lb(arr, 0, n-1,target);
    if(f1 == n || arr[f1] != target){
        cout<<-1<<" "<<-1<<" ";
        return -1;
    }
    int l1 = ub(arr, 0, n-1,target);
    cout<<first<<" "<<last<<endl;
    cout<<f1<<" "<<(l1-1)<<" ";
}