#include<iostream>
using namespace std;

int main()
{
    int t, n, count = 0;
    
    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        int x, sum = 0;
        cin >> x;
        sum += x;
        t -= sum;
        if (t >= 0)
            count++;
    }

    cout << count << endl;

    return 0;
}
