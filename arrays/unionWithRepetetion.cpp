#include <iostream>
#include <vector>
using namespace std;
//union of two arrays with repetetion
int main() {
  vector<int> arr{1,3,5,7};
  vector<int> brr{2,4,6,8};
  vector<int> finalArr;

  //push all elements of arr into finalArr
  for(int i=0; i<arr.size();i++){
    finalArr.push_back(arr[i]);
  }

  //push all elements of brr into finalArr
  for(int i=0; i<brr.size();i++){
    finalArr.push_back(brr[i]);
  }

  //printing final Array
   cout<<"Final Array : ";
   for(int i=0; i<finalArr.size();i++){
    cout<<finalArr[i]<<" ";
  }
  return 0;
}