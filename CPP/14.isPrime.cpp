// to check if a number is prime
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    cin >> a;
    cout << isPrime(a);
    return 0;
}