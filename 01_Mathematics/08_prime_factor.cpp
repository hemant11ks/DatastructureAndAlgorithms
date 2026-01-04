
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Recursive Binary Search function
//     int binarySearch(vector& nums, int low, int high, int target) {
//         if (low > high) return -1; // Base case: target not found

//         // Find middle index
//         int mid = (low + high) / 2;

//         // If target is found at mid
//         if (nums[mid] == target) return mid;
//         // If target is greater, search right half
//         else if (target > nums[mid])
//             return binarySearch(nums, mid + 1, high, target);
//         // Otherwise, search left half
//         return binarySearch(nums, low, mid - 1, target);
//     }

//     // Public function to initiate search
//     int search(vector& nums, int target) {
//         return binarySearch(nums, 0, nums.size() - 1, target);
//     }
// };

// int main()
// {
//     vector a = {3, 4, 6, 7, 9, 12, 16, 17}; // sorted array
//     int target = 6; // target element to search

//     Solution obj; // Create object of Solution class
//     int ind = obj.search(a, target);

//     if (ind == -1) cout << "The target is not present." << endl;
//     else cout << "The target is at index: " << ind << endl;

//     return 0;
// }

// #include <iostream>
// #include <limits.h>
// using namespace std;

//  void printPrimeFactors(int n)
// {
// 	if(n <= 1)
// 		return;

// 	for(int i=2; i*i<=n; i++)
// 	{
// 		while(n % i == 0)
// 		{
// 			cout<<i<<" ";

// 			n = n / i;
// 		}
// 	}

// 	if(n > 1)
// 		cout<<n<<" ";

// 	cout<<endl;
// }

// int main() {
    
//     	int n = 450;
    	
//     	printPrimeFactors(n);
    	
//     	return 0;
// }
#include <iostream>
#include <limits.h>
using namespace std;

 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;
}

int main() {
    
    	int n = 450;
    	
    	printPrimeFactors(n);
    	
    	return 0;
}