#include<iostream>
#include<vector>
using namespace std;
int main(){

    // int n=7;
    // int array[n] = {89,7,56,3,12,1,9};
    // vector<int> array[n];

    vector<int> array = {89, 7, 56, 3, 12, 1, 9};
    int n = array.size();
    
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }

    cout << "Sorted Array :- ";
    for(int k=0;k<n;k++){
        cout << array[k] << " , ";
    }

    cout << endl;

    return 0;
}


// DYNAMIC

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     int n;

//     cout << "Enter the array size :- ";
//     cin >> n;

//     vector<int> array(n);

//     for(int i=0;i<=n-1;i++){
//         cout << "Array of [" << i << "] :- ";
//         cin >> array[i];
//     }

//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-2;j++){
//             if(array[j] > array[j+1]){
//                 swap(array[j], array[j+1]);
//             }
//         }
//     }

//     cout << "Sorted Array :- ";
//     for(int k=0;k<n;k++){
//         cout << array[k] << " , ";
//     }

//     cout << endl;

//     return 0;
// }
