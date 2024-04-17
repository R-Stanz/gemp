#include <iostream>

using namespace std;

int main() {
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int* a = new int[2];
    a[0] = 1;
    a[1] = 2;

    int* b = new int[2];

    for (int i = 0; i < 2; i++) {
        b[i] = a[i];
    }

    b = a;

    for (int i = 0; i < 2; i++) {
        cout << b[i] << endl;
    }

    a[0] = 5;
    b[1] = 9;

    for (int i = 0; i < 2; i++) {
        cout << b[i] << endl;
    }
}