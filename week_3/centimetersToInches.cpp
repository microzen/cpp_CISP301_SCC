/*
 * -----------------------------------------------------------------------
 * File: centimetersToInches.cpp
 * Project: week_3
 * File Created: Monday September 7th 2020 06:56 pm
 * Author: Microzenas(Microzenas@gmail.com)
 * -----
 * Last Modified: Monday September 7th 2020 07:42 pm
 * Modified By: Microzenas
 * -----------------------------------------------------------------------
 */
// #include <iostream>
double centimetersToInches(double cm);
int main()
{
    // Demonstrates how to convert 100 centimeters to inches.
    double result = centimetersToInches(100);
    return 0;
}
//
// Processing Module #10
// Converts a number of centimeters to inches.
// 'in'  parameter: centimeters
// 'return' parameter: inches
//
double centimetersToInches(double cm)
{
    double temp = 2.45;
    return (cm / temp);
}