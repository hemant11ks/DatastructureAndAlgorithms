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
   for(int i = 0; i<n; i++){
      // First space
      for(int j = 0; j<n-i-1; j++){
          cout<<"  ";
      }
      // Mid star
      for(int k = 0; k<2*i + 1; k++){
          cout<<"* ";
      }
      // Last space
      for(int l = 0; l<n-i-1; l++){
          cout<<"  ";
      }
      cout<<"\n";
   }

}

void halfDownwardPyramid(int n)
{
   // First loop of space, Second Loop for star and third loop for space
   for(int i = 0; i<n; i++){
      // First space
      for(int j = 0; j<i; j++){
          cout<<"  ";
      }
      // Mid star
      for(int k = 0; k<2*n - (2*i + 1); k++){
          cout<<"* ";
      }
      // Last space
      for(int l = 0; l<i; l++){
          cout<<"  ";
      }
      cout<<"\n";
   }

}


void diamondPattern(int n)
{
   // First loop of space, Second Loop for star and third loop for space
   for(int i = 0; i<n; i++){
      // First space
      for(int j = 0; j<n-i-1; j++){
          cout<<"  ";
      }
      // Mid star
      for(int k = 0; k<2*i + 1; k++){
          cout<<"* ";
      }
      // Last space
      for(int l = 0; l<n-i-1; l++){
          cout<<"  ";
      }
      cout<<"\n";
   }

    // First loop of space, Second Loop for star and third loop for space
   for(int i = 0; i<n; i++){
      // First space
      for(int j = 0; j<i; j++){
          cout<<"  ";
      }
      // Mid star
      for(int k = 0; k<2*n - (2*i + 1); k++){
          cout<<"* ";
      }
      // Last space
      for(int l = 0; l<i; l++){
          cout<<"  ";
      }
      cout<<"\n";
   }

}

void diamondHalfPattern(int n){
   for(int i=0; i<n; i++){
      // star
      for(int j=0; j<i; j++){
          cout<<"*";
      }
      // space
      for(int k=0; k<n-i-1; k++){
          cout<<" ";
      }

      cout<<"\n";

   }
   
   for(int i=0; i<n; i++){
      // star
      for(int j=0; j<n-i-1; j++){
          cout<<"*";
      }
      // space
      for(int k=0; k<i; k++){
          cout<<" ";
      }

      cout<<"\n";

   }
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
    // halfUpwardPyramid(5);
    // halfDownwardPyramid(5);
    // diamondPattern(5);
    diamondHalfPattern(5);

 return 0;
}