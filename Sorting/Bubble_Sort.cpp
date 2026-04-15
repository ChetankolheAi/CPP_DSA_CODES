#include<iostream>
using namespace std;
void BubbleSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int arr[] = {10,2,4,5,17,23,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);

    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) cout << arr[i] << " ";
    return 0;
}