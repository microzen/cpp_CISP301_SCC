#include <iostream>
using namespace std;
char getHeavest(double a, double b, double c);
int main()
{
    char heavest;
    double a = 10, b = 30, c = 2;
    
    // double a = 110, b = 30, c = 2;
    // double a = 10, b = 30, c = 200;
    /* or cin >> a,b,c */
    heavest = getHeavest(a, b, c);
    cout << heavest<<" is heavest!" << endl;
    return 0;
}
char getHeavest(double a, double b, double c)
{
    char heavest = 'C';
    if (a > b)
    {
        if (a > c)
        {
            heavest = 'A';
        }
    }
    else if (b > c)
    {
        heavest = 'B';
    }
    return heavest;
}