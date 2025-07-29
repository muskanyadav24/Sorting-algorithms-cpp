// #include<iostream>
// using namespace std;

// void selectionSort(int uns[], int n){

//     for(int i=0;i<n;i++){
//         int minInd = i;
//         // int j = i+1;

//         for(int j=i+1;j<n;j++){
//             if(uns[j] < uns[minInd]){
//                 minInd = j;
//             }
//         }
//         swap(uns[minInd], uns[i]);
//     }
// }

// void printSort(int uns[],int n){

//     for(int i=0;i<n;i++){
//         cout << uns[i] << " , ";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[5] = {67,87,2,4,21};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout << "Unsorted Array :- ";
//     printSort(arr,n);

//     selectionSort(arr, n);

//     cout << "Sorted Array :- ";
//     printSort(arr,n);

//     return 0;
// }

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