#include<iostream>
using namespace std;

int PivotFinding(int arr[] , int n , int low , int high){
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;       // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // place pivot in correct position
    return i + 1;
}
void QuickSortMain(int arr[] , int n , int low , int high){
    if(low<high){


        //Finding Next Pivot of the Array
        int pi = PivotFinding(arr, n , low , high);

        //Performing on the Left of Pivot Element // Excluding Pivote as it is on its required Place
        QuickSortMain(arr,n,low, pi-1);

        //Performing on the Right of Pivot Element // Excluding Pivote as it is on its required Place
        QuickSortMain(arr,n,pi+1,high);
    }
}
int main(){
    int arr[] = {1, 2, 3 ,22, 5,6 , 7};
    int n =sizeof(arr)/sizeof(arr[0]) ;
    QuickSortMain(arr,n,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}   