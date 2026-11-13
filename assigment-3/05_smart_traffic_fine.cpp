#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double speed, fine = 0;
    char previousViolations, validLicence, registered;

    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;
    cout << "Previous violations? (Y/N): ";
    cin >> previousViolations;
    cout << "Valid driving licence? (Y/N): ";
    cin >> validLicence;
    cout << "Is the vehicle registered? (Y/N): ";
    cin >> registered;

    if (speed < 0) {
        cout << "Invalid speed.";
        return 0;
    } else if (speed <= 60) {
        fine = 0;
    } else if (speed <= 80) {
        fine = 2000;
    } else if (speed <= 100) {
        fine = 5000;
    } else {
        fine = 10000;
    }

    if (previousViolations == 'Y' || previousViolations == 'y') {
        fine = fine + fine * 0.25;
    } else if (previousViolations != 'N' && previousViolations != 'n') {
        cout << "Invalid previous-violations status.";
        return 0;
    }

    if (validLicence == 'N' || validLicence == 'n') {
        fine += 5000;
    } else if (validLicence != 'Y' && validLicence != 'y') {
        cout << "Invalid licence status.";
        return 0;
    }

    if (registered == 'N' || registered == 'n') {
        fine += 10000;
    } else if (registered != 'Y' && registered != 'y') {
        cout << "Invalid vehicle registration status.";
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal fine: Rs. " << fine;
    if (validLicence == 'N' || validLicence == 'n' || registered == 'N' || registered == 'n') {
        cout << "\nJourney status: Vehicle cannot continue until legal documents are valid.";
    } else {
        cout << "\nJourney status: Vehicle may continue after paying the applicable fine.";
    }
    return 0;
}
