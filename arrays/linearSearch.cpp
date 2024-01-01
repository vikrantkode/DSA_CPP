//linear search
#include <iostream>
using namespace std;
bool find(int brr[],int arraySize, int keytoFind){
  for(int i=0;i< arraySize;i++){
    if(brr[i] == keytoFind){
      return true;
    }
  }
  return false;
}

int main() {
    int arr[10]={1,3,5,7,9,11,34,56,4,10};
  int size = 10;
  int key;
  cout<<"Enter the key to find in array : "<<endl;
  cin>>key;
  if (find(arr,size,key)){
    cout<<"Key is present in the array";
  }else{
   cout<<"Key is not present in the array";
  }
   
  return 0;
}


