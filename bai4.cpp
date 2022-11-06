#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
    if(n > 0) {
        return sum(n - 1) + (2 * n -1);
    }else return 0;
}

int main() {
    int n;
    cout << "N: ", cin >> n;
    cout << "Sum N: " << sum(n);
}