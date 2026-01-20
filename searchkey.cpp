//the first program solve , have some syntax error but i solve it 
#include <iostream>
using namespace std;

void mateix(int sorted[][4], int n) {
    int key = 33;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (sorted[i][j] == key) {
                cout << "Key found at: " << i << " , " << j << endl;
                return;
            }
        }
    }

    cout << "Key not found" << endl;
}

int main() {
    int sorted[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    mateix(sorted, 4);
    return 0;
}
