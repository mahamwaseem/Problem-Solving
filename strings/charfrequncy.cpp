#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  char z;
  cout<<"enter a string: ";
  getline(cin, x);
   cout<<"enter a character:";
   cin>> z;

  int frequency = 0;


  
 for (int i = 0; i < x.length(); i++)
 {
    if(x[i] == z){
      frequency++;
    }
 }
 cout<< "frequency = "<< frequency;

  return 0;
}