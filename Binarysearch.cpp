#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1,2,4,5,7,9};
    int low = 0; 
    int target = 7;
    int high = arr.size()-1;
    while(low <= high){
        int mid = (low+high) /2;
        if(arr[mid] == target){
            cout<<arr[mid] <<" "<<mid;
            return arr[mid];
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}