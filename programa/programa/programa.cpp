#include "pch.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int ii, n, sum = 0;

    cout << "¬ведите число: " << endl;
    cin >> n;

    for (ii = 1; ii <= n; ii++);
    {
        sum += ii;
    }

    cout << "—умма: " << sum << endl;

    cin.get();
    return 0;
}