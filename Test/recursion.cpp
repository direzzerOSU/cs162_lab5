/*********************************************************************
** Program name: Recursive Functions 
** Author: Ryan DiRezze
** Date: October 28, 2018
** Description: Implements various recursive functions
*********************************************************************/

#include "recursion.hpp"

// recursive function #1: print a string in reverse
void printReverse(std::string input) {
   // start at the last character based on the string's size, then "steps" (by
   // 1) to the next position; the position value decreases by 1 until the loop
   // reaches the first element in the string (position 0)
   for(int n=(input.size()-1); n>=0; n--) {
      cout << input[n];
   }
   cout << endl;
}

// recursive function #2: calculates the sum of an array of integers
int sumInts(int* array, int numElements) {
   // initialize the sum to 0
   int sum = 0;
   // "step" through the array and add one element's value at a time until the
   // loop reaches the last position within the array
   for(int n=0; n<numElements; n++) {
      sum += array[n];
   }
   // return the sum
   return sum;
}

// recursive function #3: calculate the triangular number of an integer
int triangularNumber(int N) {
   // initialize the value to 0
   int total = 0;
   // loop through each integer until adding the number the was passed as
   // a parameter
   for(int i=1; i<=N; i++) {
      total += i;
   }
   // return the triangular number
   return total;
}
