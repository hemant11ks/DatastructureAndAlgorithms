// Naive solution to find LCM of two numbers

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int naive_lcm(int a, int b){

    int res = max(a,b);

    while(true){
        if(res % a == 0 && res % b == 0){
            return res;
        }
        res ++;

    }
    return res;
}

int efficient_gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return efficient_gcd(b, a % b);
}

int efficient_lcm(int a, int b){
    return (a*b) / efficient_gcd(a,b);
}

int main()
{

    int a = 4, b= 6; // result should be 12

    int ans = naive_lcm(a,b);
    cout<<"LCM is: "<<ans<<endl; 
    
    int ans2 = efficient_lcm(a,b);
    cout<<"LCM is: "<<ans2<<endl;
 return 0;
}