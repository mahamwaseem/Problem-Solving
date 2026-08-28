
#include<iostream>
#include<string>
using namespace std;
int main(){

  string x;
  cout<< "enter a srting: ";
  cin>> x;

  int  count = 0;
for(int i = 0; i < x.length(); i++){

  if (x[i]=='a' ||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
  {
    count++;
  }
  
  } 
  
  cout<<"vowels = "<<count;
  
  return 0;
}