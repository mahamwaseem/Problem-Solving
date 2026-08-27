#include<iostream>
using namespace std;
int main(){
  int num , i, c=0;
  cout<< " Enter a number: ";
  cin >> num;

  for(int i = 1; i<=num; i++){
    if(num % i == 0){
      c=c+1;
    }
    
  } 
  if (c == 2){
      cout<<"Prime";
    }
    else{
      cout<<"Not prime";
    }
  
  return 0;
}