#include <iostream>
using namespace std;

bool isPalindrome(int number){
    int reversedNumber(0), remainder(0), temp(number);
    while(temp > 0){
        remainder = temp %10;
        reversedNumber = reversedNumber*10 + remainder;
        temp /= 10;
    }
    return(reversedNumber == number);
}

int main()
{
    int number(0);
    cout << "\nEnter a number: ";
    cin >> number;
    cout << "Palindrome:" << isPalindrome(number);
    return 0;
}
