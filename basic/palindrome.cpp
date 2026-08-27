//Check karo number palindrome hai ya nahi.
#include<iostream>
using namespace std;
 int main(){

  int num, original;

  cout<<"Enter a number:";
  cin>> num;
  original = num;

  int reverse = 0;

  while (num!=0)
  {
    int digit = num%10;
    reverse = reverse *10 +digit;
    num = num/10;
  }

  if(original == reverse){
    cout<<"is palindrom";
  }
  else{
    cout<<"not palindrom";
  }
  
 }