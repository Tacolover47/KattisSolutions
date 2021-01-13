#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int c = 1;
    while(cin >> x){
       vector<int> list;
       for(int i = 0; i < x; i++){
           int y;
           cin >> y;
           list.push_back(y);
       }
       int numGoals;
       cin >> numGoals;
       vector<int> goals;
        for(int i = 0; i < numGoals; i++){
           int y;
           cin >> y;
           goals.push_back(y);
       }
       vector<int> sums;
       for(int i = 0; i < list.size(); i++){
           for(int j = 0; j < list.size(); j++){
               if(j != i){
                   sums.push_back(list.at(i) + list.at(j));
               }
           }
       }

       cout << "Case " << c << ":" << endl;
       for(int i = 0; i < goals.size(); i++){
           int distance = 10000000;
           int closeIndex = 0;
           for(int j = 0; j < sums.size(); j++){
               if(abs(goals.at(i) - sums.at(j)) < distance){
                   distance = abs(goals.at(i) - sums.at(j));
                    closeIndex = j;
               }
           }
           cout << "Closest sum to " << goals.at(i) << " is " << sums.at(closeIndex) << "." << endl;
       }
       c++;
    }
    
    return 0;
}
