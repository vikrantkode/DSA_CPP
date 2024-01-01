#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Hey.. Today I am learning vectors" << endl;
  //creating a vector
  vector<int> arr;

  //inserting in vector array
   arr.push_back(5);
   arr.push_back(80);
   arr.push_back(10);

  //printing in vector array
   for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

  // removing element from end 
  arr.pop_back();
  //printing in vector array
   for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   int n;
   cout<<"enter the size of vector array brr"<<endl;
   cin>>n;

   vector<int> brr(n,-1);
   cout<<"Size of array brr is :"<<brr.size()<<endl;
   cout<<"Capacity of array brr is :"<<brr.capacity()<<endl;

   for(int i=0; i<brr.size(); i++){
    cout<<brr[i]<<" ";
   }
   cout<<endl;

  cout<<"Printing chracter array : ";
    vector<char> crr{'a','e','i','o','u'};
    for(int i=0; i<crr.size(); i++){
    cout<<crr[i]<<" ";
   }
   cout<<endl;

  return 0;
}