// count digits of a number
#include<iostream>
using namespace std;
int main(){

   int num;

   cout<<"Enter a number: ";
   cin>> num;

   int counter = 0;
   while (num != 0)
   
   {
    num = num/ 10;
    counter++;
   }
   cout << "Total digits: " << counter;
 return 0;
}