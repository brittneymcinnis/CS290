/*************************************************************************
 * Author: Brittney McInnis
 * Date: 1/5/2016
 * Description: Program will calculate the average of 5 numbers entered
 * (Project 1b for week 1 of CS 165)
 * ******************************************************************/

#include <iostream>
using namespace std;

int main()
{
   double number1, number2, number3, number4, number5, averageOfNumbers;

//prompt user for 5 numbers
   cout << "Please enter five numbers." << endl;

//get 5 numbers entered by user and store into variables
   cin >> number1;
   cin >> number2;
   cin >> number3;
   cin >> number4;
   cin >> number5;

//take the average of the numbers entered and store into variable
   averageOfNumbers =(number1 + number2 + number3 + number4 + number5)/5.0;

//output resulting average to screen
   cout << "The average of those numbers is " << averageOfNumbers << endl;
    cout << "The End." << endl;

   return 0; 

}
