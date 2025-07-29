#include<iostream>
using namespace std;
int main(){

    int n=10;
    int array[n] = {90,29,59,10,2,4,27,12,33,67};

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }

    for(int k=0;k<n;k++){
        cout << array[k] << " , ";
    }

    cout << endl;

    return 0;
}




// DYNAMIC

// #include<iostream>
// using namespace std;
// int main(){

//     int n,array[100];

//     cout << "Enter the array size :- ";
//     cin >> n;


//     for(int i = 0; i<=n-1; i++) {
//         cout << "Array of [" << i << "] :- ";
//         cin >> array[i];
//     }

//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-2;j++){
//             if(array[j] > array[j+1]){
//                 swap(array[j],array[j+1]);
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