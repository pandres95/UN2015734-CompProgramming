#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void pow2(int& x) {
    x = pow(x, 2);
}

int pow3(int x) {
    return pow(x, 3);
}

int main() {
    int x, y;

    cin >> x >> y;

    pow2(x);
    y = pow3(y);

    cout << x << " " << y << endl;
    return 0;
}
