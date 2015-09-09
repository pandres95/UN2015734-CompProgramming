#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Define size of maximum numers in data type
    int n = (int)pow(2, (4 * sizeof(int)));

    // Iterates over (-n/2, n/2) to get all
    // possible (i % 3 == 0) values in range.
    cout << "A: {";
    for(int i = (-1 * (n/2)); i < (n/2); i++){
        if(i % 3 == 0) cout << i << ", ";
    }
    cout << "}" << endl;

    return 0;
}
