#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printRectStarPattern(int n)
{
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<"* ";
    }
    cout<<"\n";
   }
}

void rightAngleTrianglPattern(int n)
{
   for(int i=0; i<n; i++){
    for(int j=1; j<=i; j++){
        cout<<j<<" ";
    }
    cout<<"\n";
   }
}

void rightAngleTrianglPatternSameI(int n)
{
   for(int i=0; i<n; i++){
    for(int j=1; j<=i; j++){
        cout<<i<<" ";
    }
    cout<<"\n";
   }
}

void rightAngleTrianglPatternReverse(int n)
{
   for(int i=0; i<n; i++){
    for(int j=n; j>i; j--){
        cout<<j<<" ";
    }
    cout<<"\n";
   }
}


void rightAngleTrianglPatternReverseAnother(int n)
{
   for(int i=1; i<=n; i++){
    for(int j=0; j < n - i + 1; j++ ){
        cout<<"* ";
    }
    cout<<"\n";
   }
}

void halfUpwardPyramid(int n)
{
   // First loop of space, Second Loop for star and third loop for space
   

}
int main()
{
    // Adding the logic to run in testcases
    // int t;
    // cin >> t;
    // while(t--){
    //     int n;
    //     cin >> n;
    //         printRectStarPattern(n);
    // }
    // printRectStarPattern(5);
    // rightAngleTrianglPattern(5);
    // rightAngleTrianglPatternSameI(5);
    // rightAngleTrianglPatternReverse(5);
    // rightAngleTrianglPatternReverseAnother(5);
    halfUpwardPyramid(5);

 return 0;
}