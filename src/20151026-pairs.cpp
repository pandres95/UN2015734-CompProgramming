/**
 * pairs.cpp: Pairs count in [a, b]
 */
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int pairs(int a, int b) {
    int i, pairs = 0;

    for(int i = a; i <= b; i++){
        if(i % 2 == 0) {
            pairs++;
            cout << i << " ";
        }
    }

    cout << endl;
    return pairs;
}

int main() {
    int a, b;

    cout << ">> [a, b]: ";
    cin >> a >> b;
    cout << "<< " << pairs(a, b) << endl;

    return 0;
}
