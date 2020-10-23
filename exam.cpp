#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    int k, same = 0;
    string myans, hisans;

    cin >> k;

    cin >> myans;
    cin >> hisans;

    for (int i = 0; i < myans.size(); i++)
    {
        if (myans[i] == hisans[i])
            same++;     
    }

    int diff = myans.size() - same;
    if (same <= k)
        cout << myans.size() - (k - same);
    else
        cout << k + diff;

    return 0;
}
