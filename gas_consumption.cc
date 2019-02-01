/*
 *        File: gas_consumption.cc
 *      Author: Maggie Morgan
 *        Date: 1/31/19
 * Description: This program evaluates the amount of gas consumption in various situations and gives values based on input submissions.
 *
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

   double miles_t, gas_t, miles_h, gas_h, total_mi, total_g, average_mpg;
   cout << "Enter number of miles driven in town: ";
   cin >> miles_t;
   cout << "Enter the number of miles driven on the highway: ";
   cin >> miles_h;
   gas_t = miles_t / (22.5);
   gas_h = miles_h / (29.5);
   total_mi = miles_t + miles_h;
   total_g = gas_t + gas_h;
   average_mpg = total_mi / total_g;
   cout << "---------------Gas Consumption---------------" << endl;
   cout << "The number of miles driven in town: " << miles_t << " miles" << endl;
   cout << "The gas consumption for town driving: " << gas_t << " gallons" << endl;
   cout << "The number of miles driven on the highway: " << miles_h << " miles" << endl;
   cout << "The gas consumption for highway driving: " << gas_h << " gallons" << endl;
   cout << "The total miles driven: " << total_mi << " miles" << endl;
   cout << "The total gas consumption: " << total_g << " gallons" << endl;
   cout << "The average mpg for the trip: " << average_mpg << " miles/gallon" << endl;
   cout << "---------------------------------------------" << endl;
   return 0;
}// main
