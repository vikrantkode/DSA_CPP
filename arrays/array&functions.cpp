#include <iostream>
using namespace std;
void printArray(int crr[], int sizeArray){
  for(int i=0;i<sizeArray;i++){
    cout<< crr[i] << " ";
  }
  cout<<endl;
}

void incrementArray(int brr[], int sizeOfArray){
  brr[0] = brr[0] + 10;
  brr[1] = brr[1] + 20;

  printArray(brr,sizeOfArray);
}



int main() {
  //arrays and functions
  int arr[] = {5,10,15};
  int size = 3;
  incrementArray(arr,size);
  printArray(arr,size);
  return 0;
}