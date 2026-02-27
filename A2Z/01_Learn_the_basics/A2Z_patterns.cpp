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

void diamondHalfPattern(int N){
    // Outer loop for number of rows.
      for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N) stars = 2*N-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
           // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}

void binaryNumberTriangle(int n){
    // First row start print with 1
    int start = 1;
    for (int i = 0; i<n; i++){
        // If the row index is even we start with 1
        if(i%2 == 0) start = 1;
        // If the row index is odd we start with 0
        else start = 0;

        // Now we need to target the alternate 1 and 0
        for( int j = 0; j<=i; j++){
            cout<<start;
            // Now need to switch between 0 and 1
            start = 1-start;
        }

        cout<<"\n";
       
    }
}

void numberCrownPattern(int n){

    int space = 2* (n-1);
    for(int i = 1; i<= n; i++){
        // First part of the pattern
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }

        // Space in the middle
        for(int k = 1; k<=space; k++){
            cout<<"  ";
        }

        // Second part of the pattern
        for(int l = i; l>=1; l--){
            cout<<l<<" ";
        }

        // After each row we need to move to the next line
        cout<<"\n";

        // Now we need to reduce the space by 2 after each row
        space -= 2;
    }
}

void increasingNumberTriangle(int n){
    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }

}

void increasingLetterTrainglePattern(int n){
  for(int i = 0; i<n; i++){
    for(char x = 'A'; x<='A' + i; x++){
        cout<<x<<" ";
    }
    cout<<"\n";
  }
}

void reverseLetterTrainglePattern(int n){

    for(int i = 0; i<n; i++){
        for(char x = 'A'; x <= 'A'+ (n-i-1); x++){
            cout<<x<<" ";
        }
        cout<<"\n";
    }


}

void alphaRampPattern(int n){
   for(int i = 0; i<n; i++){

    char ch = 'A' + i;
    for(int j = 0; j<= i; j++){
        cout<<ch<<" ";
    }
    cout<<"\n";
  }
}

/*
Iterate from i = 0 to N - 1 to process each row.
Print (N - i - 1) spaces to center-align the pyramid.
Initialize a character variable ch = 'A'.
Calculate the midpoint of the row as breakpoint = (2 * i + 1) / 2.
Iterate from j = 1 to 2 * i + 1 to print the characters:
If j ≤ breakpoint, print ch and increment it.
Else, decrement ch and print it.
Print (N - i - 1) spaces again (optional, as they don't affect output but maintain symmetry in code).
Print a newline to move to the next row.
*/

void alphaHillPattern(int N){
 // Loop for each row
    for (int i = 0; i < N; i++) {

        // Print leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            // Increment character till the midpoint, then decrement
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Newline after each row
        cout << endl;
    }
}

void alphaTrianglePattern(int n) {
    // Outer loop
    for(int i = 0; i<n; i++){
        // Print characters from ('A' + N - 1 - i) to ('A' + N - 1)
        for(char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1 ); ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}

void symmetricVoidPattern(int n){
   // Initialize spaces between star blocks
        int spaces = 2 * n - 2;

        // Loop for rows
        for (int i = 1; i <= 2 * n - 1; i++) {
            // Calculate stars for first half
            int stars = i;

            // Adjust stars for second half
            if (i > n) stars = 2 * n - i;

            // Print left stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Print spaces
            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            // Print right stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Move to next line
            cout << endl;

            // Adjust spaces for next row
            if (i < n) spaces -= 2;
            else spaces += 2;
        }
}

void hollowSquarePattern(int n){
    // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                // Print star if it's a border cell
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                // Print space otherwise
                else
                    cout << " ";
            }
            // Move to next line after each row
            cout << endl;
        }

}

void numberInsideNumberPattern(int n){
      // Outer loop for rows
        for (int i = 0; i < 2 * n - 1; i++) {
            // Inner loop for columns
            for (int j = 0; j < 2 * n - 1; j++) {
                // Calculate distance from top
                int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
            }
            // Move to the next row
            cout << endl;
        }
}

// A2Z Patterns

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
    // diamondHalfPattern(5);
    // binaryNumberTriangle(5);
    // numberCrownPattern(5);
    // increasingNumberTriangle(5);
    // increasingLetterTrainglePattern(5);
    // reverseLetterTrainglePattern(5); 
    // alphaRampPattern(5); 
    // alphaHillPattern(5);   
    // alphaTrianglePattern(5);  
    // symmetricVoidPattern(5); 
    // hollowSquarePattern(5);  
    numberInsideNumberPattern(5); 

 return 0;
}