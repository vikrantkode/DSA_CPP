//pair sum of one array
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{10,20,30,40,50,60};
  int sum = 60; 

  //running through outer loop
  for(int i=0; i<arr.size();i++){
    // cout<<"We are at element : "<<arr[i]<<endl;
    int element = arr[i];
    for(int j=i+1; j<arr.size();j++){
      // cout <<"Pair with "<<element<<" (" << element <<","<< arr[j] <<") "<<endl;
      if(element + arr[j] == sum){
        cout<<"Pair Found : ("<<element<<","<<arr[j]<<")"<<endl;
      }
    }
  }
    return 0;
}