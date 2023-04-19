#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, num, compositeCount = 0, primeCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0) {
            cout << "Negative numbers are not considered in this program.\n";
            continue;
        }
        if (isPrime(num))
            primeCount++;
        else
            compositeCount++;
    }

    cout << "Prime numbers: " << primeCount << endl;
    cout << "Composite numbers: " << compositeCount << endl;

    return 0;
}

