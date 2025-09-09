#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr ={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    vector<int> arr ={7,7,7,7, 7, 7, 2, 3, 4, 4, 4, 5, 7};
    int n = arr.size();
    int low = 0; 
    int high = n-1;
    int k = 3;
    while( low<= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            cout<<mid;
            return mid;
        }
        if(arr[low]== arr[mid] && arr[mid] == arr[high]){
            low = low+1;
            high = high-1;
            continue;
        }
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k<= arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] <= k && k <= arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}