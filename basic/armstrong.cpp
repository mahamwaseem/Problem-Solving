#include<iostream>
using namespace std;
int main(){

  int num, original;
  cout<<"Enter a number:";
  cin>>num;
 original = num;
 int sum = 0;
  while (num!=0)
  {
    int digit = num % 10;

    sum = sum +digit *digit  *digit ;

    num = num / 10;
  }

  if(sum == original){
    cout<< "Armstrong number";
  }
  else{
    cout<<"not armstrong number";
  }

  return 0;
}