/*
Problem Statement: You are given a sorted array arr of distinct values and a target value x. 
You need to search for the index of the target value in the array.
*/

#include <iostream>
#include <vector>
using namespace std;

class BinarySearchInsert {
public:
    // Function to find the insert position of x in sorted array
    int searchInsert(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = n; // Default to end if x is greater than all elements

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= x) {
                // Potential answer found, try to go left
                ans = mid;
                high = mid - 1;
            } else {
                // Go right
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;

    BinarySearchInsert obj;
    int index = obj.searchInsert(arr, x);

    cout << "The index is: " << index << endl;

    return 0;
}
