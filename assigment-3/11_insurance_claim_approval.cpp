#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char validInsurance, policyExpired, validLicence, alcohol, responsible;
    double damage, payable;

    cout << "Does the vehicle have valid insurance? (Y/N): ";
    cin >> validInsurance;
    cout << "Has the insurance policy expired? (Y/N): ";
    cin >> policyExpired;
    cout << "Does the driver have a valid driving licence? (Y/N): ";
    cin >> validLicence;
    cout << "Was the driver under the influence of alcohol? (Y/N): ";
    cin >> alcohol;
    cout << "Enter estimated damage amount (Rs.): ";
    cin >> damage;
    cout << "Was the driver responsible for the accident? (Y/N): ";
    cin >> responsible;

    if (damage < 0) {
        cout << "Invalid damage amount.";
    } else if (validInsurance == 'N' || validInsurance == 'n') {
        cout << "Claim Rejected: Vehicle does not have valid insurance.";
    } else if (policyExpired == 'Y' || policyExpired == 'y') {
        cout << "Claim Rejected: Insurance policy has expired.";
    } else if (validLicence == 'N' || validLicence == 'n') {
        cout << "Claim Rejected: Driver does not have a valid licence.";
    } else if (alcohol == 'Y' || alcohol == 'y') {
        cout << "Claim Rejected: Driver was under the influence of alcohol.";
    } else if ((validInsurance != 'Y' && validInsurance != 'y') ||
               (policyExpired != 'N' && policyExpired != 'n') ||
               (validLicence != 'Y' && validLicence != 'y') ||
               (alcohol != 'N' && alcohol != 'n') ||
               (responsible != 'Y' && responsible != 'y' &&
                responsible != 'N' && responsible != 'n')) {
        cout << "Invalid yes/no input.";
    } else {
        payable = damage;
        if (responsible == 'Y' || responsible == 'y') {
            payable = damage * 0.80;
        }

        cout << fixed << setprecision(2);
        if (damage < 20000) {
            cout << "Claim Approved without inspection.";
            cout << "\nFinal payable amount: Rs. " << payable;
        } else if (damage <= 200000) {
            cout << "Physical inspection required before final approval.";
            cout << "\nEstimated payable amount if approved: Rs. " << payable;
        } else {
            cout << "Manager approval required before final approval.";
            cout << "\nEstimated payable amount if approved: Rs. " << payable;
        }
    }
    return 0;
}
