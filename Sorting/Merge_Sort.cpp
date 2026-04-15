#include<iostream>
using namespace std;
void merge(int arr[] , int l , int mid , int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int leftarr[n1];
    int rightarr[n2];
    for(int i=0; i<n1;i++){
        leftarr[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        rightarr[i] = arr[mid+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(leftarr[i]<=rightarr[j]){
            arr[k] = leftarr[i];
            k++ ;i++;
        }
        else{
            arr[k] = rightarr[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k] = leftarr[i];
        k++ ;i++;
    }
    while(j<n2){
        arr[k] = rightarr[j];
        k++;j++;
    }
}
void mergeSort(int arr[] , int l , int r ){

    if(l<r){
        int mid =  l + (r - l) / 2;
        mergeSort(arr, l ,mid);
        mergeSort(arr , mid+1 , r);
        merge(arr , l , mid , r);
        
    }
    

}
int main(){
    int arr[] = {10,2,4,5,17,23,44};
    int l = 0;
    int r = 6;
    mergeSort(arr, l , r);

    cout << "Sorted array: ";
    for (int i = 0; i < 7; i++) cout << arr[i] << " ";
    return 0;
}