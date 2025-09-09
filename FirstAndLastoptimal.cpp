#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int>arr,int n,int target){
    int first = -1;
    int low = 0; 
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            first  = mid;
            high = mid-1;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high= mid - 1;
        }
    }
    return first;
}
int lastOccurence(vector<int>arr,int n,int target){
    int last = -1;
    int low = 0; 
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            last  = mid;
            low = mid+1;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high= mid - 1;
        }
    }
    return last;
}
int main(){
    vector<int> arr = {3,4,13,13,13,20,40};
    int n  = arr.size();
    
    int target = 13;
    // int last = -1;
    int firstOccur = firstOccurence(arr, n,target);
    int lastoccur = lastOccurence(arr, n,target);
    cout<<firstOccur<<" "<<lastoccur;
}