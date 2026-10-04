#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter 5 numbers:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }

    cout << "Sum of 5 numbers = " << sum << endl;
    return 0;
}
