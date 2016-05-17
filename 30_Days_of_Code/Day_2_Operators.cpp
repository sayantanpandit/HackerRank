/*
Program Name : Operators
Link         : https://www.hackerrank.com/challenges/30-operators
Author Name  : Sayantan Pandit
Date         : 16-05-2016 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost;
    int tipPercent, taxPercent;    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = (mealCost * tipPercent)/100;
    double tax = (mealCost * taxPercent)/100;
    double totalCost = mealCost + tip + tax;
    
    cout << "The total meal cost is " << round(totalCost) << " dollars." << endl;
    return 0;
}
