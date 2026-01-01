/* 
The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &arr, int target){

    int n = arr.size();
    int left = 0;
    int right = n-1;
    int ans = n;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] >= target){
            ans  = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr={1,2,2,3};
    int target=3;
    int result = lower_bound(arr, target);
    cout<<"The lower bound is at index: "<<result<<endl;
    
 return 0;
}

/*
Example: 1, 2, 2, 3   | target = 3
Output: The lower bound is at index: 3
Our goal is arr[ind] >= target [First index where this condition holds true]
 */