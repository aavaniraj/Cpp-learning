#include<iostream>
using namespace std;

int main() {
    int num, original, temp, digit, count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Step 1: Count the number of digits
    temp = num;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }

    // Step 2: Calculate sum of each digit raised to the power of count
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        
        int power = 1;
        for (int i = 0; i < count; i++) {
            power = power * digit;
        }
        
        sum = sum + power;
        temp = temp / 10;
    }

    // Step 3: Compare sum with original number
    if (sum == original) {
        cout << "Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }

    return 0;
}