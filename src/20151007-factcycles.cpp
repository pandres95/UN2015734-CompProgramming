#include <cstdlib>
#include <iostream>

using namespace std;

int a(int n) {
    int y = 1;
    if(n > 1){
        for(int i = 1; i <= n; i++){
            y *= i;
        }
    }
    return y;
}

int b(int n) {
    int i = 1
    ,   y = 1;
    if(n > 1){
        while(i <= n){
            y *= i++;
        }
    }
    return 0;
}

int c(int n) {
    int i = 1
    ,   y = 1;
    if(n > 1){
        do {
            y *= i++;
        } while(i <= n);
    }
    return 0;
}

int main() {
    while(cin >> n){
        cout << a(n) << ", " << b(n) << ", " << c(n) << endl;
    }
    return 0;
}
