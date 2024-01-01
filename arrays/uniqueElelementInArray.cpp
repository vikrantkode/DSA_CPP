// Find unique element in an array
#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr){

  int ans =0;
  for(int i=0; i<arr.size();i++){
    ans = ans^arr[i];
  }
  return ans;
}

int main() {
  //taking size of an array
  int n;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;

  //delcaring vector of size n that we are taking as an input variable
  vector<int> arr(n);

  //taking elements of array
  cout<<"Enter elements of an array"<<endl;
  for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
  }

  //creating function for finding unique element
  int uniqueElement = findUnique(arr);
  cout<<"Unique element is : "<< uniqueElement <<endl;
  
  return 0;
}