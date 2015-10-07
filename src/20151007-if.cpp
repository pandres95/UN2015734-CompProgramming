#include <cstdlib>
#include <iostream>

using namespace std;

int factorial(int n){
    return n > 0 ? n * factorial(n - 1) : 1;
}

int y(int x){
    int y;
    if(x >= 0){
        return (x * (x - 1) / 2) - x;
    } else {
        if(x % 2 == 0){
            return factorial(x);
        } else {
            return -1 * factorial(x);
        }
    }
    return 0;
}

int c(int a, int b) {
    if(a >= 0) {
        return a * b;
    } else if(b <= 0) {
        return b * b;
    } else if(a >= 0 && b <= 0) {
        return a * a * a;
    } else {
        return 0;
    }
}

int main() {

    int a, b;

    while(cin >> a >> b){
        cout << c(a, b) << ", " << y(a) << endl;
    }

    return 0;
}
