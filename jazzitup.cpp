#include <bits/stdc++.h>
using namespace std;

bool isSquareFree(long long num){
    for(long long i = 2; i < sqrt(num); i++){
        long long res = (num % (i*i));
        if(res == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long max;
    cin >> max;

    for(long long i = 2; i < max; i++){
        if(isSquareFree(i)){
            if(isSquareFree(i*max)){
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
