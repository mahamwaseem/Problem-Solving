//largest digit

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largest = 0;

    while(num != 0){
        int digit = num % 10;

        if(digit > largest){
            largest = digit;
        }

        num = num / 10;
    }

    cout << "Largest digit: " << largest;

    return 0;
}