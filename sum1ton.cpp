// Calculate sum of numbers from 1 to n

#include<iostream>
using namespace std;

int main() {
   int num, i, sum = 0;

  cout<<"Enter a number: ";
  cin>> num;

  for (int i = 1; i<= num; i++){
    sum = sum+ i;
   
  }
   cout<<sum;
  return 0;
}