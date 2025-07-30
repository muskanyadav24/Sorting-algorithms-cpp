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
