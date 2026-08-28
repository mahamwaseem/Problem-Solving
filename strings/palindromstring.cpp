
#include<iostream>
#include<string>
using namespace std;
int main(){

  string a;
  cout<< "enter a srting: ";
  cin>> a;

  string reverse = "";

  for(int i = a.length()-1; i>=0; i--){
    reverse = reverse+ a[i];
}
    if(a == reverse){
      cout<<"palindrome";
  }
  else{
    cout<<"not palindrome";
  }

  
  return 0;
}