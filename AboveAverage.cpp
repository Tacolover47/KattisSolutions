#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int numCase, numClass, classScores[1000];
    double avg[1000], sum[1000], above[1000], total[1000];
    cin >> numCase;
    for (int i = 0; i < numCase; i++)
    {
        avg[i] = 0;
        sum[i] = 0;
        above[i] = 0;
        total[i] = 0;
        cin >> numClass;
        for (int j = 0; j < numClass; j++)
        {
            cin >> classScores[j];
        }
        for (int j = 0; j < numClass; j++)
        {
            sum[i] += classScores[j];
        }
        avg[i] = sum[i]/numClass;
        for (int j = 0; j < numClass; j++)
        {
            if (avg[i] < classScores[j])
            {
                above[i]++;
            }
            total[i]++;
        }
    }
    for (int i = 0; i < numCase; i++)
    {
        /*cout << sum[i] << " ";
        cout << avg[i] << " ";
        cout << above[i] << " ";*/
        cout << fixed << setprecision(3) << above[i] / total[i] * 100 << "%" << endl;
    }
    

    return 0;
}
