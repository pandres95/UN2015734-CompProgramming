/**
 * pairs.cpp: Pairs count in [a, b]
 */
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int max(int a, int b, int c, int d) {
    int array[4] = { a, b, c, d };
    int max = a;

    for(int i = 0; i < 4; i++){
        if (max < array[i]){
            max = array[i];
        }
    }

    return max;
}

int main() {
    int a, b, c, d;

    cout << ">> (a, b, c, d): ";
    cin >> a >> b >> c >> d;
    cout << "<< " << max(a, b, c, d) << endl;

    return 0;
}
