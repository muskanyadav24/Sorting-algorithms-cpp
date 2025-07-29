#include<iostream>
using namespace std;

int partition(int array[], int low, int high){
    int idx = low - 1, pivot = array[high]; // Pivot is the last element
    for(int j=low;j<high;j++){
        if(array[j] <= pivot){
            idx++;
            swap(array[j], array[idx]); // Directly swapping without using & or separate swap function
        }
    }
    idx++;
    swap(array[high],array[idx]); // Swap pivot into correct position
    return idx; // Return the index of the pivot

}

void quickSort(int array[], int low, int high){
    if(low < high){
        int pivIdx = partition(array, low, high);

        quickSort(array,low,pivIdx - 1); // Left part
        quickSort(array,pivIdx + 1, high); // Right part
    }
}

int main(){

    int array[8] = {14,16,12,15,17,11,19,13}; // 11,12,13,14,15,16,17,19
    int n = sizeof(array)/sizeof(array[0]); 

    quickSort(array,0, n-1);

    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}