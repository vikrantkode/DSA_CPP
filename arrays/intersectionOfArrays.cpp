//intersection of two arrays
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{1,2,2,3,4,5,7,9};
  vector<int> brr{1,2,2,3,4,5,11,10};
  vector<int> finalArray;

 // running through outer loop
  for(int i=0; i<arr.size();i++){
    int element = arr[i];
    //comparing element to other array
    for(int j=0;j<brr.size();j++){
      if (element == brr[j]){
        brr[j] = -1;
        finalArray.push_back(element);
      }
    }
  }

  for (auto values : finalArray){
    cout << values << " ";
  }
  return 0;
}