#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#include<iostream>
#include<bits/stdc++.h>

int __gcd(int a, int b)
{
    
}

using namespace std;
int main()
{
    int a = 10, b = 15;
    int ans = __gcd(a, b);
    cout<<ans<<endl;

 return 0;
}


// Naive approach to calculate GCD
/*
int cal_gcd(int a, int b)
{
   int res = min(a,b);

   while(res > 0){
    if(a % res == 0 && b % res == 0){
        break;
    }
    res--;
   }
   return res;
}

int main()
{
   int a = 10, b = 15;
   int ans = cal_gcd(a, b);
   cout<<ans<<endl;

 return 0;
}

*/

int cal_gcd(int a, int b)
{
   if(b == 0){
    return a;
   }
   return cal_gcd(b, a % b);
}

int main()
{
   int a = 10, b = 15;
   int ans = cal_gcd(a, b);
   cout<<ans<<endl;

 return 0;
}

