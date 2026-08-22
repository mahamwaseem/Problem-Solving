// count digits of a number
#include<iostream>
using namespace std;
int main(){

   int num;

   cout<<"Enter a number: ";
   cin>> num;

   int sum = 0;
   while (num != 0)
   
   {
    int digit = num % 10; // find last digit
    sum = sum +digit; // add digit
    num = num/10; //remove last digit
   }
   cout << "sum: " << sum;
 return 0;
}