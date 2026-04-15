#include<iostream>
#include<limits.h>
using namespace std;
int FindMin(int arr[] , int StaringIndex  , int n){
    int min = INT_MAX;
    int index = 0;
    for(int i=StaringIndex ;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    return index;

}
void SelectionSort(int arr[] ,int n){
    for(int i = 0 ;i<n;i++){
        int min = FindMin(arr , i , n);
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
}
int main(){
    int arr[] = {1, 2, 3 ,4 , 5,6 , 7};
    int n =sizeof(arr)/sizeof(arr[0]) ;
    SelectionSort(arr,n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}