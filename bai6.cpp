#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
    if(n > 0) {
        return pow(sum(n - 1),2) + pow(n,2);
    }
    else return 0;
}

int main() {
    int n;
    cout << "n: ", cin >> n;
    cout << "Sum = " << sum(n);
}