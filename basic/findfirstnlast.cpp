//Number ka first aur last digit find karo.

#include<iostream>
using namespace std;

int main(){
   int num;

   cout<<"Enter a number:";
   cin>> num;

   int lastdigit = num%10;
   int firstdigit = num;

   while (firstdigit >=10)
   {
     firstdigit = firstdigit / 10;
   }
   
   cout<< "Firstdigit = "<<firstdigit<<endl;
   cout<< "lastdigit = "<<lastdigit<<endl;

   return 0;

}