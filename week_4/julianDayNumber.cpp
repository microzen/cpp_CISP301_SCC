/*
 * -----------------------------------------------------------------------
 * File: julianDayNumber.cpp
 * Project: week_4
 * File Created: Saturday September 19th 2020 07:22 pm
 * Author: Microzenas(Microzenas@gmail.com)
 * -----
 * Last Modified: Sunday September 27th 2020 02:39 pm
 * Modified By: Microzenas
 * -----------------------------------------------------------------------
 */
#include <iostream>
void julianDayNumber(int year, int month, int day, int &jdn);
void inputDate(int &year, int &month, int &day);
void printResults(int year, int month, int day, int jdn);

int main(int argc, char *argv[])
{
   // using for recording date
   int year, month, day;
   // using for recording the result for julian dya number
   int jdn;

   inputDate(year, month, day);
   julianDayNumber(year, month, day, jdn);
   printResults(year, month, day, jdn);

   return 0;
}
//
// A input date module by user.
//
void inputDate(int &year, int &month, int &day)
{
   std::cout << "Enter number of month\t: ";
   std::cin >> month;
   std::cout << "Enter number of day\t: ";
   std::cin >> day;
   std::cout << "Enter number of year\t: ";
   std::cin >> year;
}
//
// A processing module that gets julian day number by a data.
//
void julianDayNumber(int year, int month, int day, int &jdn)
{
   int a = (14 - month) / 12;
   int m = (month - 3) + (12 * a);
   int y = year + 4800 - a;
   int leap_days = (y / 4) - (y / 100) + (y / 400);
   jdn = day + ((153 * m) + 2) / 5 + (365 * y) + leap_days - 32045;
}
//
// An output module that displays the JDN
//
void printResults(int year, int month, int day, int jdn)
{

   std::cout << "\nThe JDN for "
             << month << "/" << day << "/" << year << " is "
             << jdn << std::endl;
}