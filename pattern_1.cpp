#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {  // Changed i<=5 to j<=5
            if (i + j > 5) {
                cout << "* ";
            } else {
                cout << "  ";  // Changed " " to "  " for consistent spacing
            }
        }
        cout << endl;
    }
    return 0;
}
