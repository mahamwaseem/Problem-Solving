// String ki length find karo bina length() use kiye.

#include<iostream>
#include<string>
using namespace std;
int main(){

  string x = "maham";
  int count = 0;

  for (int i = 0; x[i] != 0; i++){
    count++;
  }
  cout<<"length="<<count;
  return 0 ;
}
