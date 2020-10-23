#include<iostream>
#include <algorithm>
#include <vector> 
using namespace std;

int main()
{
    int numberOfBooks, total = 0;
    vector <int> prices;
    cin >> numberOfBooks;
    for(int i = 0; i < numberOfBooks; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    sort(prices.begin(), prices.end(), greater<int>());
    for(int i =0; i < numberOfBooks; i++)
    {
        if((i+1)%3==0)
        {
            vector <int> subGroup;
            subGroup.push_back(prices.at(i-2));
            subGroup.push_back(prices.at(i-1));
            subGroup.push_back(prices.at(i));
            sort(subGroup.begin(), subGroup.begin()+2, greater<int>());
           // cout << "After sort: " << subGroup.at(0)
            //  << subGroup.at(1) << subGroup.at(2) << endl;
            subGroup.erase(subGroup.begin()+2);
            total += subGroup.at(0);
            total += subGroup.at(1);
            //cout << subGroup.at(0) << " " << subGroup.at(1);
            //cout << "Current total: " << total << endl;
        }
        //cout << "Current total: " << total << endl;
    }
    if((prices.size() % 3) == 2)
        {
            total+= prices.at(numberOfBooks-2);
            total+= prices.at(numberOfBooks-1);
        }
    else if((prices.size() % 3) == 1)
        {
            total+= prices.at(numberOfBooks-1);
        }
    cout << total;
    return 0;
}
