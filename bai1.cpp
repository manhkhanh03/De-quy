#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

int main()
{
    int n;
    cout << "N: ", cin >> n;
    cout << n << "!:" << factorial(n);
}