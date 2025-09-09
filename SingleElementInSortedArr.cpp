#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    int n = arr.size();
    int low = 1;
    int high = n-2;
    if(n==1){
        cout<<arr[0]<<endl;
        return arr[0];
    }
    for(int i = 0 ; i < n ; i++){
        if(i == 0 && arr[0] != arr[1]){
                cout<<arr[0];
                return arr[0];           
        }
        else if(i == n-1 && arr[n-1] != arr[n-2]){
                cout<<arr[n-1];
                return arr[n-1];
        }
        else{
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                cout<<arr[i]<<endl;
                return arr[i];
            }
        }
    }


    if(arr[0] != arr[1]){
        cout<<arr[0];
        return arr[0];
    }
    if(arr[n-1] != arr[n-2]){
        cout<<arr[n-1];
        return arr[n-1];
    }
    while (low <= high)
    {
        int mid= (low+high)/2;
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            cout<<arr[mid];
            return arr[mid];
        }
        if((mid %2) == 1 && arr[mid] == arr[mid -1] || (mid%2)== 0 && arr[mid] == arr[mid+1]){
            low = mid+1;
        } 
        else{
            high = mid-1;
        }
    }
    
}