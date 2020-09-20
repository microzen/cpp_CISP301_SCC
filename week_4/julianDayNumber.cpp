/*
 * -----------------------------------------------------------------------
 * File: julianDayNumber.cpp
 * Project: week_4
 * File Created: Saturday September 19th 2020 07:22 pm
 * Author: Microzenas(Microzenas@gmail.com)
 * -----
 * Last Modified: Saturday September 19th 2020 07:49 pm
 * Modified By: Microzenas
 * -----------------------------------------------------------------------
 */
#include <iostream>
int julianDayNumber(int year, int month, int day);
int main(int argc, char *argv[])
{
   const int year = 2020;
   const int month = 9;
   const int day = 19;
   int jdn = julianDayNumber(year, month, day);
   std::cout << "JDN is:" << jdn
             << "\nDOW is:" << (jdn+1) % 7
             << std::endl;

   return 0;
}
int julianDayNumber(int year, int month, int day)
{
   int a = (14 - month) / 12;
   int m = (month - 3) + (12 * a);
   int y = year + 4800 - a;
   int leap_days = (y / 4) - (y / 100) + (y / 400);
   int jdn = day + ((153 * m) + 2) / 5 + (365 * y) + leap_days - 32045;
   return jdn;
}