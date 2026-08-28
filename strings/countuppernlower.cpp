#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  cout<<"enter a string: ";
  getline(cin, x);

  int upper = 0;
  int lower  = 0;
  for(int i = 0; i < x.length(); i++){
    if (x[i] >= 'A' && x[i] <= 'Z')
    {
      upper++;
    }
    else if (x[i] >= 'a' && x[i] <= 'z')
    
    {
      lower++;
    }

    
  }
  cout<<" upper = "<<upper<< endl;
  cout<< "lower = "<< lower;


  return 0;
}