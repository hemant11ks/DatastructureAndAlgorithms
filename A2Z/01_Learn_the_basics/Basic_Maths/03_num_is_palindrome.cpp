#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int number) {
    int revNum = 0; // Initialize a variable to store the reverse of the number
    int dup = n; // Create a duplicate variable to store the original number

    // Iterate through each digit of the number until it becomes 0
    while (n > 0) {
        int ld = n % 10; // Extract the last digit of the number
        revNum = (revNum * 10) + ld; // Build the reverse number by appending the last digit
        n = n / 10; // Remove the last digit from the original number
    }

    // Check if the original number is equal to its reverse
    if (dup == revNum) {
        return true; // If equal, return true indicating it's a palindrome
    } else {
        return false; // If not equal, return false indicating it's not a palindrome
    }
}

int main()
{
  int number = 4554;

  if(palindrome(number)){
    cout<<number<<" is a palindrome. "<<endl;
  } else {
    cout<<number<<" is not a palindrome. "<<endl;
  }

 return 0; // return 0
}