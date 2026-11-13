#include <iostream>
using namespace std;

int main() {
    double balance, amount;
    int alreadyWithdrawn;
    char blocked, verification;

    cout << "Enter account balance (Rs.): ";
    cin >> balance;
    cout << "Enter withdrawal amount (Rs.): ";
    cin >> amount;
    cout << "Enter amount already withdrawn today (Rs.): ";
    cin >> alreadyWithdrawn;
    cout << "Is the account blocked? (Y/N): ";
    cin >> blocked;

    if (balance < 0 || amount < 0 || alreadyWithdrawn < 0) {
        cout << "Invalid input.";
    } else if (blocked == 'Y' || blocked == 'y') {
        cout << "Transaction rejected: Account is blocked.";
    } else if (blocked != 'N' && blocked != 'n') {
        cout << "Invalid account status.";
    } else if (amount < 500) {
        cout << "Transaction rejected: Minimum withdrawal is Rs. 500.";
    } else if (static_cast<long long>(amount) % 500 != 0) {
        cout << "Transaction rejected: Amount must be a multiple of Rs. 500.";
    } else if (amount > balance) {
        cout << "Transaction rejected: Insufficient account balance.";
    } else if (alreadyWithdrawn + amount > 100000) {
        cout << "Transaction rejected: Daily withdrawal limit exceeded.";
    } else if (amount > 50000) {
        cout << "Additional verification required. Verified? (Y/N): ";
        cin >> verification;
        if (verification == 'Y' || verification == 'y') {
            cout << "Transaction allowed.";
            cout << "\nRemaining balance: Rs. " << balance - amount;
        } else if (verification == 'N' || verification == 'n') {
            cout << "Transaction rejected: Verification not completed.";
        } else {
            cout << "Invalid verification status.";
        }
    } else {
        cout << "Transaction allowed.";
        cout << "\nRemaining balance: Rs. " << balance - amount;
    }
    return 0;
}
