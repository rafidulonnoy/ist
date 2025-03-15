#include<iostream>
using namespace std;
int main(){
  int n,i;
  cin>>n;
  i=2;
  while(i<n){
    if(n%i==0){
      cout<<"Not a Prime number"<<endl;
      return 0;
    }
    else
      i++;
  }
  cout<<"Prime Number"<<endl;
  return 0;
}
