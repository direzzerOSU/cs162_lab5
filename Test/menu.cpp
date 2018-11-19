/*********************************************************************
** Program name: Recursive Functions
** Author: Ryan DiRezze
** Date: October 28, 2018
** Description: Implements a menu that allows the user to select various
   recursive functions.
*********************************************************************/

#include "menu.hpp"
#include "inputValidation.hpp"

// the main/primary menu that issues arrive at after starting the program;
// this menu allows the user to navigate to various areas of the program
// to perform different transactions and view different data.
void RecursionMenu(char& option) {
   // introduction
   string program_name = "Recursive Problem Solving Menu";
   cout << "Hello! Welcome to the " << program_name << "!" << endl << endl;

   while(tolower(option) != 'a' && tolower(option) != 'b' && tolower(option) != 'c' && tolower(option) != 'd') {
      // menu prompt
      cout << "Please select an option from the following menu choices:" << endl;
      cout << "Input the option's corresponding letter to make a selection..." << endl << endl;
      
      // menu choices
      cout << "    a. Function #1: Print a String in Reverse" << endl;
      cout << "    b. Function #2: Calculate the Sum of an Array of Integers" << endl;
      cout << "    c. Function #3: Calculates the Triangular Number of an Integer" << endl;
      cout << "    d. Exit the program" << endl << endl;
      
      cin >> option;

      charValidation(option);

      cout << endl;

      if(tolower(option) != 'a' && tolower(option) != 'b' && tolower(option) != 'c' && tolower(option) != 'd') {
         cout << "Uh oh! It looks like you didn't input a valid menu option... Please try again." << endl << endl;
      }
   }
}

// a small prompt that asks the user if he/she would like to return to the main
// menu; this was intended to appear after the user performs some transaction
void mainMenuReturn(char& option) {
   option = 'n';
   while(tolower(option) == 'n') {
      cout << "Do you want to return to the main menu? (Y/N): ";
      cin >> option;
      validYesNo(option);

      if(tolower(option) == 'y') {
         option = 'z';       // let the program escape the 'while loop' & return to the menu
      }
      
      else if(tolower(option) == 'n') {
         cout << "Do you want to exit the program? (Y/N): ";
         cin >> option;
         validYesNo(option);
         
         // escape the 'while loop' & quit the program
         if(tolower(option) == 'y') {
            option = 'f';
            cout << endl;     // add a line & space for aesthetics
         }
         
         // do nothing and let the program run back through the 'while loop'
         else if(tolower(option) == 'n') {
            //option = 'n'
         }
      }
   }
}
