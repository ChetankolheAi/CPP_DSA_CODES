#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr, int low , int high , int target){
    if(low>high) return -1;
    
    int mid = low + (high - low) / 2;
   
    if(arr[mid] == target) return mid;
    else if(arr[mid]<target) low = mid+1;
    else if(arr[mid]>target) high = mid-1;
    
    return binarySearch(arr , low , high , target);
   
}

int main(){
    vector<int>arr ={1,11,12,2,3,44,66,44,99,2};
    sort(arr.begin(), arr.end());
    int Index = binarySearch(arr, 0 , arr.size()-1 , 11);
    (Index==-1)?cout<<"Not Found":cout<<"Found at Index"<<Index;

    return 0;
}