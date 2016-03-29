/**************************************************************************
 * Author: Brittney McInnis
 * Date: 1/5/2015
 * Description: Program that will determine the number of each coin type 
 * based on the number of cents less than a dollar entered by user
 * (Project 1d for week1 in CS 165
 * ***********************************************************************/

#include <iostream>
using namespace std;

int main()
{
   short cents,     //number of cents entered by user    
         quarters,  //number of quarters
         dimes,     //number of dimes
         nickels,   //number of nickels
         pennies,   //number of pennies
         remainingChange;

//prompt user for number of cents less than a dollar, store in cents
   cout << "Please enter an amount in cents less than a dollar:" << endl;
   cin >> cents;

//calculate number of each coin type, starting with largest (quarter)
   quarters = cents/25;   //calculate number of quarters
   remainingChange = cents%25; // calculate cents remaining after quarters
   dimes = remainingChange/10; //calculate number of dimes after quarters
   remainingChange %= 10; //calculate cents remaining after dimes
   nickels = remainingChange/5; //calculate number of dimes
   pennies = remainingChange%5; /*pennies is what remains after quarters, dimes, nickels subtracted from cents*/
   
//output number of each coins
   cout << "Your change will be:" << endl;
   cout << "Q: " << quarters << endl;
   cout << "D: " << dimes << endl;
   cout << "N: " << nickels << endl;
   cout << "P: " << pennies << endl;

   return 0;
}
