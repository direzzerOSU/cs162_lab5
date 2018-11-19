/*********************************************************************
** Program name: Recursive Functions
** Author: Ryan DiRezze
** Date: October 28, 2018
** Description: Integrates various headers and implementation files
   to execute various recursive functions.
*********************************************************************/

#include "menu.hpp"
#include "inputValidation.hpp"
#include "recursion.hpp"

int main() {
   // initialize the variable for determining which function will be 'called'
   char selection;

   // only break the loop if the user opts to exit the program
   while(tolower(selection) != 'd') {
      // reset the value after each iteration through the loop
      selection = 'z';

      // start the menu of recursive functions
      RecursionMenu(selection);

      // execute a different function based on user input
      
      // print a string in reverse
      if(tolower(selection) == 'a') {
         std::string text;
         cout << "What would you like to print in reverse?" << endl;
         getline(cin.ignore(), text);

         cout << endl << "Backwards text: " << endl;
         
         printReverse(text);
         cout << endl;
      }
      // sum a list of integers together
      else if(tolower(selection) == 'b') {
         int* pointer;
         cout << "How many integers would you like to add together?: ";
         int numInts;
         cin >> numInts;

         intValidation(numInts);

         int array[numInts];
         cout << "Please enter all integers that you'd like to sum." << endl;
         for(int n=0; n<numInts; n++) {
            cout << "Integer #" << n+1 << ": ";
            cin >> array[n];
         }

         pointer = array;
      
         cout << "\nsumInts(pointer, numInts): " << sumInts(pointer, numInts) << endl << endl;
      }
      // calculate the triangular number of an integer
      else if(tolower(selection) == 'c') {
         cout << "What integer's triangular number would you like to calculate?: ";
         int num;
         cin >> num;
         cout << num << "'s triangular number is: " << triangularNumber(num) << endl << endl;;
      }
      // exit the program
      else if(tolower(selection) == 'd') {
         // do nothing and let the program terminate
      }
   }

   return 0;
}
