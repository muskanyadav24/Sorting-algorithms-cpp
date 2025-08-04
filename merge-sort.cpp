#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){ // low is the starting index, mid is the middle index, high is the ending index
    int lr = mid - low + 1; // lr is the length of the left subarray
    // mid - low + 1 = 3 - 0 + 1 = 4
    // mid = 3, low = 0, so left subarray is from index 0 to 3
    // left subarray = {38, 27, 43, 3}
    int rr = high - mid; // rr is the length of the right subarray
    // high - mid = 6 - 3 = 3
    // mid = 3, high = 6, so right subarray is from index 4 to 6
    // right subarray = {9, 82, 10}

    int leftpoint[lr], rightpoint[rr];

    for(int i=0; i < lr; i++){
        leftpoint[i] = arr[low + i];
    }
    for(int j=0; j < rr; j++){
        rightpoint[j] = arr[mid + 1 + j];
    }

    int leftInd = 0, rightInd = 0, k = low;
    while(leftInd < lr && rightInd < rr){
        if(leftpoint[leftInd] <= rightpoint[rightInd]){
            arr[k] = leftpoint[leftInd];
            leftInd++;
        } else {
            arr[k] = rightpoint[rightInd];
            rightInd++;
        }
        k++;
    }

    while(leftInd < lr){
        arr[k] = leftpoint[leftInd];
        leftInd++;
        k++;
    }

    while(rightInd < rr){
        arr[k] = rightpoint[rightInd];
        rightInd++;
        k++;
    }

}

void mergeSort(int arr[],int midInd, int high){ // midInd is the starting index, high is the ending index
    if(midInd >= high){ // 1 ya 0 ho to, then return
        return;
    }

    int mid = (midInd + high) / 2; // mid me index store hoga , mid = (0 + 6) / 2 = 3;


    mergeSort(arr, midInd, mid); // Sort the left half , call recursively
    // midInd = 0, high = 3 
    mergeSort(arr, mid + 1, high); // Sort the right half , call recursively
    // midInd = 4, high = 6

    merge(arr, midInd, mid, high);
}

int main(){

    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr)/sizeof(arr[0]); // n = 7 X 4 = 28 bytes , n = 28 / 4 = 7; 

    mergeSort(arr, 0, n - 1); // Start the merge sort process 

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
