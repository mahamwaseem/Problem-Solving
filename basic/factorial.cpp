// Find the factorial of a number
#include<iostream>
using namespace std;
int main(){
  int num, factorial = 1;

  cout<<"Enter a number: ";
  cin>> num;

  for(int counter = 1; counter <= num; counter++){
    factorial = counter * factorial;
  }
  cout<< factorial;
  return 0;
}