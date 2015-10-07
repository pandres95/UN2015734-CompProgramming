#include <cstdlib>
#include <iostream>

using namespace std;

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
        cout << c(a, b) << endl;
    }

    return 0;
}
