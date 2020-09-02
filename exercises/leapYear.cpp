#include <iostream>
using namespace std;
bool isLeapYear(int year);
int main()
{
    int year;
    bool leap_year;
    cout << "input year to check is it a laep year?\n";
    cin >> year;
    leap_year = isLeapYear(year);
    if (leap_year)
    {
        cout << "It is a leap year!" << endl;
    }
    else
    {
        cout << "It is not a leap year!" << endl;
    }
    return 0;
}
bool isLeapYear(int year)
{
    if (year < 1800 || year > 2100)
    {
        throw "Wrong number of year! The year must between 1800 and 2100.";
    }
    bool leap_year = false;
    if (year % 100 == 0 && year % 400 == 0)
    {
        leap_year = true;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        leap_year = true;
    }
    return leap_year;
}