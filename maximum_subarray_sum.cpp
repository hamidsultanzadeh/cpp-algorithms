/* 
 * File:   main.cpp
 * Author: hamidsultanzadeh
 *
 * Created on August 27, 2019, 9:50 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    long long i = 1;

    while (cin >> n && n != 0) {

        double d = ceil(sqrt(9 + 8 * n));
        cout << d << " ";

        long long result = (3 + d) / 2;

        cout << "Case " << i << ": " << ceil(result) << endl;
        i++;
    }

    return 0;
}
