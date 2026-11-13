#include <iostream>
using namespace std;

int main() {
    double matric, intermediate, test;

    cout << "Enter Matric percentage: ";
    cin >> matric;
    cout << "Enter Intermediate percentage: ";
    cin >> intermediate;
    cout << "Enter entry test percentage: ";
    cin >> test;

    if (matric < 0 || matric > 100 || intermediate < 0 || intermediate > 100 || test < 0 || test > 100) {
        cout << "Invalid marks.";
    } else if (matric < 60) {
        cout << "Admission Rejected: Matric requirement not met.";
    } else if (intermediate < 65) {
        cout << "Admission Rejected: Intermediate requirement not met.";
    } else if (test < 50) {
        cout << "Admission Rejected: Entry test requirement not met.";
    } else if (intermediate >= 85 && test >= 80) {
        cout << "Admission Approved.";
        cout << "\nCategory: Merit Scholarship.";
    } else {
        cout << "Admission Approved.";
        cout << "\nCategory: Regular Admission.";
    }
    return 0;
}
