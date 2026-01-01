/* 
The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.
The upper bound is the smallest index, ind, where arr[ind] > x.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &arr, int target){

    int n = arr.size();
    int left = 0;
    int right = n-1;
    int ans = n;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] > target){
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
    int result = upper_bound(arr, target);
    cout<<"The upper bound is at index: "<<result<<endl;
    
 return 0;
}
