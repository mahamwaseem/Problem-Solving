#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  cout<<"enter a string: ";
  getline(cin, x);

  string lower = "";
 
  for(int i = 0; i < x.length(); i++){
    if (x[i] >= 'A' && x[i] <= 'Z')
    {
      lower += (x[i] - ('A' - 'a'));
    }
    else
    {
        lower += x[i];
    }
    
    
  }
  cout<<" Lower = "<<lower<< endl;
  


  return 0;
}