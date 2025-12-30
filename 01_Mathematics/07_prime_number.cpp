#include <iostream>
#include <limits.h>
using namespace std;

/*
Steps:
We will deal with a few numbers such as 1, 2, and 3, and the numbers which are divisible by 2 and 3 in separate cases.
For the remaining numbers, we iterate from 5 to sqrt(n) and check for each iteration whether (that value) or (that value + 2) divides n or not and increment the value by 6 [because any prime can be expressed as 6n+1 or 6n-1].
If we find any number that divides, we return false, else true.
Time complexity: O(sqrt(n))

Auxiliary space: O(1)
*/

bool isPrimeEff(int n){
    if (n==1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2== 0 || n%3 == 0){
        return false;
    }
    	for(int i=5; i*i<=n; i=i+6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}
	return true;
} 

/*
Iterate through all numbers from 2 to square root of n and for every number check if it divides n
[because if a number is expressed as n = xy and any of the x or y is greater than the root of n, 
the other must be less than the root value]. If we find any number that divides, we return false.
Time Complexity: O(sqrt(n))
Auxiliary space: O(1)
*/

bool isPrime(int n)
{
	if(n==1)
		return false;

	for(int i=2; i*i<=n; i++)
	{
		if(n % i == 0)
			return false; 
	}

	return true;
}

int main() {
    
    	int n = 65;
    	
    	printf("%s", isPrime(n) ? "true" : "false");
    	
    	return 0;
}