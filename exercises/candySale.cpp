#include <iostream>
using namespace std;
double getCandyPrice(double pounds);
int main()
{
    double pounds, price;
    cout << "How many pounds candy would you want today?\n";
    cin >> pounds;
    price = getCandyPrice(pounds);
    cout << "The price of candy is " << price << endl;
    return 0;
}

/*
*   get the price of candy by pounds.
*/
double getCandyPrice(double pounds)
{
    double price;
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
    return price;
}