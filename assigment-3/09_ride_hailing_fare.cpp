#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, waitingMinutes, fare, nightCharge = 0, discount = 0;
    int hour;
    char premium, driverCancelled;

    cout << "Enter ride distance (km): ";
    cin >> distance;
    cout << "Enter waiting time (minutes): ";
    cin >> waitingMinutes;
    cout << "Enter ride start hour (0-23): ";
    cin >> hour;
    cout << "Premium member? (Y/N): ";
    cin >> premium;
    cout << "Did the driver cancel after accepting? (Y/N): ";
    cin >> driverCancelled;

    if (distance < 0 || waitingMinutes < 0 || hour < 0 || hour > 23) {
        cout << "Invalid input.";
        return 0;
    }

    fare = 150 + (distance * 50) + (waitingMinutes * 10);

    if (hour >= 22 || hour < 6) {
        nightCharge = fare * 0.20;
    } else {
        nightCharge = 0;
    }
    fare += nightCharge;

    if (premium == 'Y' || premium == 'y') {
        discount = fare * 0.10;
    } else if (premium == 'N' || premium == 'n') {
        discount = 0;
    } else {
        cout << "Invalid membership status.";
        return 0;
    }
    fare -= discount;

    cout << fixed << setprecision(2);
    cout << "\nFinal ride fare: Rs. " << fare;
    if (driverCancelled == 'Y' || driverCancelled == 'y') {
        cout << "\nDriver cancellation penalty: Rs. 300 (charged to driver).";
    } else if (driverCancelled == 'N' || driverCancelled == 'n') {
        cout << "\nDriver cancellation penalty: Rs. 0.";
    } else {
        cout << "\nInvalid cancellation status.";
    }
    return 0;
}
