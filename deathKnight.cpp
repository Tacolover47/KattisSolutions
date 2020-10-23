#include<iostream>
#include <string> 
using namespace std;

int main()
{
    int n;
    string k[100], d = "D";
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        count++;
        string temp = k[i];
        int len = temp.size();
        if ((temp[len - 1] == 'D')&& (temp[len - 2] == 'C'))
            count--;
    }

    cout << count;

    return 0;
}
