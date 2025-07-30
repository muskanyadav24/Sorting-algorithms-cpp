#include<iostream>
#include<vector>
using namespace std;
int main(){

  int n;

  cout << "Enter the size of array :- ";
  cin >> n;

  vector<int> array(n);

  for(int i=0;i<n;i++){
    cout << "Array of [" << i << "] :- " ;
    cin >> array[i];
  }

  for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-2;j++){
      if(array[j] > array[j+1]){
        swap(array[j],array[j+1]);
      }
    }
  }

  cout << "Sorted array :- ";
  
  for(int k=0;k<n;k++){
    cout << array[k] << " , ";
  }

  cout << endl;
  
  return 0;
}


// OUTPUT :-

// Enter the size of array :- 5
// Array of [0] :- 89
// Array of [1] :- 56
// Array of [2] :- 21
// Array of [3] :- 24
// Array of [4] :- 12
// Sorted array :- 12 , 21 , 24 , 56 , 89 , 
