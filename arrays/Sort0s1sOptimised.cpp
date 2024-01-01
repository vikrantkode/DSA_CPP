#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{0,1,0,1,1,0,1,0,1,1};

  int start =0;
  int end = arr.size() - 1;
  int i = 0;

  while(i!=end){
    if(arr[i] == 0){
      //swap from left
      swap(arr[i], arr[start]);
      i++;
      start++;
    } else {
      //swap from right
      swap(arr[i], arr[end]);
      // i++;
      end--;
    }
  }
  cout<<"Sorted 0s and 1s are : ";
  for (auto value : arr){
    cout<< value << " ";
  }
  return 0;
}