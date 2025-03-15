#include<iostream>
using namespace std;
int main(){
  int n,target,loc;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: ";
  for(int i = 0; i < n; i++)
    cin>>arr[i];
  cout<<"Enter the element to search: ";
  cin>>target;
  for(int i=0;i<n;i++){
    if(target == arr[i]){
      loc=i+1;
      break;
    }
  }
  cout<<"The target element is in the location: "<<loc<<endl;
}
