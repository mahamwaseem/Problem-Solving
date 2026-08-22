#include<iostream>
using namespace std;
 int main() {

  int i;
  cout<<"Enter a number: ";
  cin>> i;

  if(i == 0){
    cout<< "Zero";
  }
  else if(i >= 0){
    cout<< "Positive";
  }
  else{
    cout<< "Negative";
  }
  return 0;

 }