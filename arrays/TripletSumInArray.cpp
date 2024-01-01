//Triplet sum of one array
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr{10,20,30,40,50,60};
  int sum = 60; 

  for(int i=0; i<arr.size();i++){
    int elementOne = arr[i];

    for(int j=i+1; j<arr.size();j++){
      int elementTwo = arr[j];

      for (int k=i+2;k<arr.size();k++){
        int elementThree = arr[k];

        if(elementOne + elementTwo +  elementThree == sum){
        cout<<"Triplet Found : ("<<elementOne<<","<<elementTwo<<","<<elementThree<<")"<<endl;
      }
      }
     
    }
  }
    return 0;
}