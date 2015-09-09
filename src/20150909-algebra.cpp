#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const int a = 16;
const int b = 15;

double f1(int x){
    return pow(x, 2)/3 + x + a % 2 + b / 3 - 5 * -43;
}

double f2(int x){
    return pow(x, 2) + x - a % 3;
}

int main(){
    cout << "f1(45) = " << f1(45) << endl;
    cout << "f2(15) = " << f2(15) << endl;

    return 0;
}
