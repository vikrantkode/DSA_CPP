//finding maximum number in an array
#include <iostream>
#include<limits.h>
using namespace std;

int main() {
 int arr[] = {1,4,6,7,8,98,56,445,34,23,43,223,123,432};
 int size = 15;
//  int size;
//  cout<<"Enter size of array "<<endl;
//  cin>>size;
//  int arr[size]; 
 //initialize the variable with the minimum possible integer value
 int maximumValue = INT_MIN;

 for(int i=0;i<size;i++){
  if(arr[i]>maximumValue){
    maximumValue=arr[i];
  }
 }

 cout<<"Maximum value in array is"<<" "<<maximumValue<<endl;

}