/*
Program Name : Data Types
Link         : https://www.hackerrank.com/challenges/30-data-types
Author Name  : Sayantan Pandit
Date         : 16-05-2016 
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int numInt;
    double numDoub;
    char str[100];
   
    // Read and save an integer, double, and String to your variables.    
    scanf("%d %lf\n%[^\n]", &numInt, &numDoub, str);

    // Print the sum of both integer variables on a new line.
    cout << numInt + i << endl;    

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << numDoub+d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << str << endl;
    return 0;
}
