#include<iostream>
using namespace std;
int main(){

  int num;
  cout<<"Enter a number:";
  cin>>num;
 int smallest = 9;
  while (num!=0)
  {
    int digit = num % 10;

    if(digit < smallest){
    smallest = digit;
    }

    num = num / 10;
  }
  cout<<"smallest = "<<smallest;
  

  return 0;
}