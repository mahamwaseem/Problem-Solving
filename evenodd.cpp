#include<iostream>
using namespace std;

int main() {
  int i;
  cout<< "Enter a number : ";
  cin>> i;

  if(i%2 == 0){
    cout<< "Even";
  }
  else{
    cout<<"Odd";
  }
  return 0;
}