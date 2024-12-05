#include <iostream>

using namespace std;

int main() {
    int table[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            table[i][j] = (j * i);
            cout << table[i][j] << "\t"<< flush;
        }
        cout << endl;
    }
    return 0;
}
