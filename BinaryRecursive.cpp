#include<bits/stdc++.h>
using namespace std;
int Bin(vector<int> arr , int low, int high, int target){
    if(low > high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){
        return Bin(arr, low, mid-1,target);
    }
    else{
        return Bin(arr, mid+1, high,target);
    }
}
int main(){
    vector<int> arr ={1,2,4,5,7,9};
    int low = 0; 
    int target = 7;
    int high = arr.size()-1;
    cout<<Bin(arr, low,high, target);
    // count<<ans;
}