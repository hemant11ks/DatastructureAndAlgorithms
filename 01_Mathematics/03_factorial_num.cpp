#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int calculate_factorial(int num)
{
   int factorial  = 1;

   for(int i = num; i>= 1; i--){

    factorial = factorial * i;
    
   }

   return factorial;

}
*/
int calculate_factorial(int num)
{
   if(num == 0 || num == 1){
    return 1;
   }

   return num * calculate_factorial(num - 1);
}


int main()
{

 int num = 5;
 int ans = calculate_factorial(num);
 cout<<ans;
 return 0;
}