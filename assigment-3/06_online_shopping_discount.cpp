#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchase, discountRate = 0, discountedAmount, delivery = 0, payable;
    char premium, unpaidOrder;

    cout << "Enter purchase amount (Rs.): ";
    cin >> purchase;
    cout << "Premium member? (Y/N): ";
    cin >> premium;
    cout << "Is there an unpaid previous order? (Y/N): ";
    cin >> unpaidOrder;

    if (purchase < 0) {
        cout << "Invalid purchase amount.";
        return 0;
    } else if (purchase > 50000) {
        discountRate = 0.20;
    } else if (purchase > 25000) {
        discountRate = 0.15;
    } else if (purchase > 10000) {
        discountRate = 0.10;
    } else {
        discountRate = 0;
    }

    if (premium == 'Y' || premium == 'y') {
        discountedAmount = purchase * (1 - discountRate);
        discountedAmount = discountedAmount * 0.95;
    } else if (premium == 'N' || premium == 'n') {
        discountedAmount = purchase * (1 - discountRate);
    } else {
        cout << "Invalid membership status.";
        return 0;
    }

    if (discountedAmount > 20000) {
        delivery = 0;
    } else {
        delivery = 500;
    }
    payable = discountedAmount + delivery;

    cout << fixed << setprecision(2);
    cout << "\nAmount after discount: Rs. " << discountedAmount;
    cout << "\nDelivery charges: Rs. " << delivery;
    cout << "\nPayable amount: Rs. " << payable;

    if (unpaidOrder == 'Y' || unpaidOrder == 'y') {
        cout << "\nOrder status: Not confirmed (previous order is unpaid).";
    } else if (unpaidOrder == 'N' || unpaidOrder == 'n') {
        cout << "\nOrder status: Confirmed.";
    } else {
        cout << "\nInvalid previous-order status.";
    }
    return 0;
}
