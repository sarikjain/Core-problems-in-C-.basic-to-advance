#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the amount: ";
    cin >> num;

    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 1};
    int n = 9;          // number of denominations
    int totalNotes = 0; // total minimum notes

    cout << "Notes used:\n";
    for (int i = 0; i < n; i++) {
        if (num >= denominations[i]) {
            int count = num / denominations[i]; // how many notes of this denomination
            num = num % denominations[i];      // remaining amount
            totalNotes += count;               // add to total
            cout << denominations[i] << " x " << count << endl;
        }
    }

    cout << "Minimum number of notes required: " << totalNotes << endl;
    return 0;
}
