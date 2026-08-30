#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "How much percent did you score on your math test? ";
    cin >> score;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << endl;
    if (score >= 90) {
        cout << "You got an A!";
    } else if (score >= 80) {
        cout << "You got a B!";
    } else if (score >= 70) {
        cout << "You got a C!";
    } else if (score >= 60) {
        cout << "You got a D!";
    } else {
        cout << "You failed!";
    }

    cout << "\n\nPress Enter to exit...";
    cin.get(); // Wait for user input before closing the console window
    return 0;
}