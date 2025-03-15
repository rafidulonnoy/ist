#include<iostream>
using namespace std;
int main(){
  int principal,time;
  float rate,interest;
  cout<<"Enter Principal, Rate & Time: ";
  cin>>principal>>rate>>time;
  interest = principal*(rate/100)*time;
  cout<<"Interest: "<<interest<<endl;
  cout<<"New Principal: "<<principal+interest<<endl;
}
