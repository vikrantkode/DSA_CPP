// counting 0's and 1's
#include <iostream>
using namespace std;

int main() {
  int arr[]={1,0,0,0,0,1,1,1,1,0,1,1,1,1,0,0,0,1,0,1};
  int size=20;
  int numZeroCount = 0;
  int numOneCount = 0;
  // cout<<"Enter size of array "<<endl;
  // cin >> size;

  for (int i=0; i<size; i++){
    if(arr[i] == 0){
      numZeroCount++;
    }
    if(arr[i] == 1){
      numOneCount++;
    }
  }

  cout<<"Number of 0's are: "<< numZeroCount <<endl;
  cout<<"Number of 1's are: "<< numOneCount <<endl;


  return 0;
}