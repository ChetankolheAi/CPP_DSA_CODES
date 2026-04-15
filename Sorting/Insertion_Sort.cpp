#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {10,23,2,1,44,100};
    int n = 6;
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;  //j is the last index of sorted Array;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}