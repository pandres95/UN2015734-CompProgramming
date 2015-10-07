#include <cstdlib>
#include <iostream>

using namespace std;

int y(int x){
    int y;
    if(x >= 0){
        y = 0;
        for(int i = 0; i < x; i++){
            y += i;
        }
    } else {
        y = 1;
        for(int i = x; i < 0; i++){
            y *= i;
        }
    }
    return y;
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
