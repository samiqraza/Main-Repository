#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double marks[5], total = 0, percentage;
    bool failed = false;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks.";
            return 0;
        } else if (marks[i] < 40) {
            failed = true;
        }
        total += marks[i];
    }

    percentage = total / 5.0;
    cout << fixed << setprecision(2);
    cout << "\nTotal marks: " << total << " / 500";
    cout << "\nPercentage: " << percentage << "%";

    if (failed) {
        cout << "\nResult: Failed (at least one subject has marks below 40).";
    } else if (percentage < 50) {
        cout << "\nResult: Passed subjects, but not eligible for the degree.";
    } else if (percentage >= 85) {
        cout << "\nResult: Passed and eligible for the degree.";
        cout << "\nAward: Gold Medal.";
    } else if (percentage >= 75) {
        cout << "\nResult: Passed and eligible for the degree.";
        cout << "\nAward: Silver Medal.";
    } else if (percentage >= 65) {
        cout << "\nResult: Passed and eligible for the degree.";
        cout << "\nAward: Merit Scholarship.";
    } else {
        cout << "\nResult: Passed and eligible for the degree.";
        cout << "\nAward: No medal or scholarship.";
    }
    return 0;
}
