#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int numStat, numDays, printers;

    cin >> numStat;

    numDays = 0;
    printers = 1;

    while (numStat > 2 * printers)
    {
        printers *= 2;
        numDays += 1;
    }

    int stat = 0;
    while (stat < numStat)
    {
        stat += printers;
        numDays += 1;
    }

    cout << numDays;

    return 0;
}
