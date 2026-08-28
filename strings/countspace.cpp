#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  cout<<"enter a string; ";
  getline(cin, x);

  int count = 0;

  for(int i = 0; i < x.length(); i++){
    if (x[i] == ' ')
    {
      count ++;
    }

    
  }
  cout<<" spaces = "<<count;


  return 0;
}