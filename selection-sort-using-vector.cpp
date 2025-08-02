#include<iostream>
using namespace std;

void selectionSort(int uns[], int n){

    for(int i=0;i<n;i++){
        int minInd = i;
        // int j = i+1;

        for(int j=i+1;j<n;j++){
            if(uns[j] < uns[minInd]){
                minInd = j;
            }
        }
        swap(uns[minInd], uns[i]);
    }
}

void printSort(int uns[],int n){

    for(int i=0;i<n;i++){
        cout << uns[i] << " , ";
    }
    cout << endl;
}

int main(){

    int n;

    cout << "Enter the array size :- ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements :" << endl;
    for(int i = 0; i < n; i++){
        cout << "Array of [" << i << "] :- ";
        cin >> arr[i];
    }

    cout << "Unsorted Array :- ";
    printSort(arr,n);

    selectionSort(arr, n);

    cout << "Sorted Array :- ";
    printSort(arr,n);


    return 0;
}

// OUTPUT :-

// Enter the array size :- 5
// Enter 5 elements :
// Array of [0] :- 21
// Array of [1] :- 3
// Array of [2] :- 12
// Array of [3] :- 43
// Array of [4] :- 24
// Unsorted Array :- 21 , 3 , 12 , 43 , 24 , 
// Sorted Array :- 3 , 12 , 21 , 24 , 43 , 
