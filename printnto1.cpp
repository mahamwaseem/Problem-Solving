// print numbers from n to 1

#include<iostream>
using namespace std;
int main(){
  int num, i;

  cout<<"Enter a number: ";
  cin>> num;

  for (int i = num; i>= 1; i--){
    cout<<i<< endl;
  }
 return 0;
}