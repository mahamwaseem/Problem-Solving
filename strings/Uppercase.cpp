#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  cout<<"enter a string: ";
  getline(cin, x);

  string upper = "";
 
  for(int i = 0; i < x.length(); i++){
    if (x[i] >= 'a' && x[i] <= 'z')
    {
      upper += (x[i] - ('a' - 'A'));
    }
    else
    {
        upper += x[i];
    }
    
    
  }
  cout<<" upper = "<<upper<< endl;
  


  return 0;
}