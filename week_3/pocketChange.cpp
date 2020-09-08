/*
 * -----------------------------------------------------------------------
 * File: pocketChange.cpp
 * Project: week_3
 * File Created: Tuesday September 8th 2020 03:54 am
 * Author: Microzenas(Microzenas@gmail.com)
 * -----
 * Last Modified: Tuesday September 8th 2020 03:27 pm
 * Modified By: Microzenas
 * -----------------------------------------------------------------------
 */
#include <iostream>
void inputQuarters(int &quarters);
void inputDimes(int &dimes);
void inputNickels(int &nickels);
void inputPennies(int &pennies);
void countChange(int quarters, int dimes, int nickels, int pennies, double &amount);
void outputMoney(int quarters, int dimes, int nickels, int pennies, double amount);

int main(int argc,char *argv[])
{
    int quarters, dimes, nickels, pennies;
    double amount;

    inputQuarters(quarters);
    inputDimes(dimes);
    inputNickels(nickels);
    inputPennies(pennies);
    countChange(quarters, dimes, nickels, pennies, amount);
    outputMoney(quarters, dimes, nickels, pennies, amount);

    return 0;
}
//
// A input quarter module.
// 'out'  parameter: quarters
//
void inputQuarters(int &quarters)
{
    std::cout << "Enter number of quarters: ";
    std::cin >> quarters;
}
//
// A input dimes module by user.
// 'out'  parameter: dimes
//
void inputDimes(int &dimes)
{
    std::cout << "Enter number of dimes\t: ";
    std::cin >> dimes;
}
//
// A inout nickels module by user.
// 'out'  parameter: nickels
//
void inputNickels(int &nickels)
{
    std::cout << "Enter number of nickels\t: ";
    std::cin >> nickels;
}
//
// A input pennies module by user.
// 'out'  parameter: pennies
//
void inputPennies(int &pennies)
{
    std::cout << "Enter number of pennies\t: ";
    std::cin >> pennies;
}
//
// A counting change module using to count a total for all of quarters, dimes, nickels, and pennies. 
// 'in'  parameter: quarters, dimes, nickels, pennies
// 'out'  parameter: amount 
//
void countChange(int quarters, int dimes, int nickels, int pennies, double &amount)
{
    const double quartersConversion = 0.25;
    const double dimesConversion = 0.1;
    const double nickelsConversion = 0.05;
    const double penniesConversion = 0.01;
    amount =
        (quarters * quartersConversion) +
        (dimes * dimesConversion) +
        (nickels * nickelsConversion) +
        (pennies * penniesConversion);
}
//
// A output module.
// 'in'  parameter:  quarters, dimes, nickels, pennies, amount
//
void outputMoney(int quarters, int dimes, int nickels, int pennies, double amount)
{
    std::cout << "With "
              << quarters << " quarter(s), "
              << dimes << " dime(s), "
              << nickels << " nickel(s) and "
              << pennies << " penn(y/ies), you have "
              << amount << "$ in change.\n"
              << std::endl;
}
