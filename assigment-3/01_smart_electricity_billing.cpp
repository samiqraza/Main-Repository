#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double units, bill = 0, surcharge = 0, lateFee = 0;
    char latePayment;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units.";
        return 0;
    } else if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else if (units <= 500) {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    } else {
        bill = (100 * 10) + (100 * 15) + (300 * 20) + ((units - 500) * 25);
    }

    if (bill > 10000) {
        surcharge = bill * 0.05;
    }

    cout << "Was payment made after the due date? (Y/N): ";
    cin >> latePayment;

    if (latePayment == 'Y' || latePayment == 'y') {
        lateFee = (bill + surcharge) * 0.10;
    } else if (latePayment == 'N' || latePayment == 'n') {
        lateFee = 0;
    } else {
        cout << "Invalid payment status.";
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "\nBasic bill: Rs. " << bill;
    cout << "\nSurcharge: Rs. " << surcharge;
    cout << "\nLate fee: Rs. " << lateFee;
    cout << "\nFinal bill: Rs. " << bill + surcharge + lateFee << endl;
    return 0;
}
