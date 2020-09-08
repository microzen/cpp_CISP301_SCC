/*
 * -----------------------------------------------------------------------
 * File: candySale.cpp
 * Project: exercises
 * File Created: Monday August 31st 2020 05:31 pm
 * Author: Microzenas(Microzenas@gmail.com)
 * -----
 * Last Modified: Saturday September 5th 2020 04:01 pm
 * Modified By: Microzenas
 * -----------------------------------------------------------------------
 */
#include <iostream>
// using namespace std;

void welcome();
void inputData(double &pounds);
void getCandyPrice(double &pounds, double &price);
void outputResult(double &total);

int main()
{
    double pounds, price;
    welcome();
    inputData(pounds);
    getCandyPrice(pounds, price);
    outputResult(price);
    return 0;
}

//
// welcome module.
//
void welcome()
{
    std::cout << "Welcome to the Candy Sale Program!" << std::endl;
}
//
// input a data of pounds.
//
void inputData(double &pounds)
{
    std::cout << "How many pounds candy would you want today?\n";
    std::cin >> pounds;
}
/*
*   get the price of candy by pounds.
*/
void getCandyPrice(double &pounds, double &price)
{
    // double price;
    if (pounds <= 5 && pounds >= 0)
    {
        price = pounds * 20;
    }
    else if (pounds > 5)
    {
        price = 100;
        price += (pounds - 5) * 12;
    }
    else
    {
        throw "Wrong number of pounds! Pounds could not be less than 0.";
    }
    // return price;
}

void outputResult(double &total)
{
    std::cout << "The price of candy is " << total << std::endl;
}