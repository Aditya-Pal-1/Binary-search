#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr ={1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    // vector<int> arr ={1, 5,1,2,1};
    int n = arr.size();
    if(n==1){
        cout<<0;
        return 0;
    }
    // Brute force
    // for(int i = 0; i<n ; i++){
    //     if((i == 0 || arr[i-1] < arr[i]) && i == n-1 ||  arr[i] > arr[i+1]){
    //         cout<< i ;
    //         return i;
    //     }
    // }
    // Optimal Solution
    if(arr[0] > arr[1]){
        cout<<0<<endl;
        return 0;
    }
    if(arr[n-1] > arr[n-2]){
        cout<<n-1<<endl;
        return n-1;
    }
    int low = 1; 
    int high = n-2;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid+1]){
            cout<<mid<<endl;
            return mid;
        }
        else if(arr[mid - 1] < arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}