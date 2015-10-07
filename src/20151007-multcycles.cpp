#include <cstdlib>
#include <iostream>

using namespace std;

int a() {
    int y = 1;
    for(int i = -5; i <= -1; i++){
        y *= i;
    }
    return y;
}

int b() {
    int y = 1
    ,   i = -5
    ,   n = -1;
    while(i <= n){
        y *= i++;
    }
    return y;
}

int c() {
    int y = 1
    ,   i = -5
    ,   n = -1;
    do {
        y *= i++;
    } while(i <= n);
    return y;
}

int main() {
    cout << a() << ", " << b() << ", " << c() << endl;
    return 0;
}
