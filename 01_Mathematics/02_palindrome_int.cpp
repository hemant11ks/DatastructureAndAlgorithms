/*
num = 763
rev = 367

rev = num % 10 + 

rev = 


Note: x % 10 = Gives the last digit of x
      x / 10 = Gives the number after removing the last digit
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){

    int reverse = 0;
    int onum = num;

    while(onum > 0){

    int ld = onum % 10; // last digit
    reverse = reverse * 10 + ld;
    onum  = onum / 10;

    }

    return reverse == num;
}

int main()
{
 int num = 626;

 bool result = isPalindrome(num);
 cout<<result;

 return 0;
}