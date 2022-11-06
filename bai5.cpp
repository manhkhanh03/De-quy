#include <bits/stdc++.h>

using namespace std;

float sum(float n) {
    if(n > 0) {
        return (1 / n) + sum(n -1);
    }
    else return 0;
}

int main() {
    float n;
    cout << "N: ", cin >> n;
    cout << "Sum = " << sum(n); 
}