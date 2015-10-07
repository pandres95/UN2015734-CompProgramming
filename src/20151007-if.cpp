#include <cstdlib>
#include <iostream>

using namespace std;

// n!
int factorial(int n){
    return n > 0 ? n * factorial(n - 1) : 1;
}

// Sum of numbers in [a, b]
int r(int i, int n){
    int y = 0;
    while(i <= n){
        y += (i * i++);
    }
    return y;
}

//          sum(i)_x=0^n-1 , n >= 0
// y(n) = {
//          mult(i)_x=n^-1 , n < 0
int y(int x){
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

    while(cin >> a){
        cin >> b;
        cout << c(a, b) << ", " << y(a) << ", " << r(a, b) << endl;
    }

    return 0;
}
