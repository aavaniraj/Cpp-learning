#include<iostream>
using namespace std;

int main() {
    cout << "Output: " << endl;

    for (int num = 1; num <= 20; num++) {
        if (num % 2 == 0) {
            cout << num << endl; 
        }
    }
    return 0;
}
