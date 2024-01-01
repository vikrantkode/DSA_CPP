//Reverse an array
#include <iostream>
using namespace std;

int main() {
 int arr[8] = {10,20,30,40,50,60,70,80};
 int size=8;
 int start = 0;
 int end = size-1;

 while(start <= end){
  //step1 swap
    swap(arr[start], arr[end]);
  //step2 array aage badhaana
    start++;
  //step3 array piche krna
    end--;
 }

 //printing the array
 for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
 }
  return 0;
}