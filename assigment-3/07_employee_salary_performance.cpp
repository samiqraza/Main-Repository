#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, attendance, rating, bonusRate = 0, bonus, finalSalary;
    int years;

    cout << "Enter basic salary (Rs.): ";
    cin >> salary;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Enter performance rating (out of 5): ";
    cin >> rating;
    cout << "Enter years of service: ";
    cin >> years;

    if (salary < 0 || attendance < 0 || attendance > 100 || rating < 0 || rating > 5 || years < 0) {
        cout << "Invalid input.";
        return 0;
    } else if (rating < 3) {
        bonusRate = 0;
    } else if (attendance < 75) {
        bonusRate = 0;
    } else if (attendance <= 89) {
        bonusRate = 0.05;
    } else if (attendance <= 95) {
        bonusRate = 0.10;
    } else {
        bonusRate = 0.15;
    }

    bonus = salary * bonusRate;
    finalSalary = salary + bonus;

    if (years > 5) {
        finalSalary += 5000;
    }

    cout << fixed << setprecision(2);
    cout << "\nBonus: Rs. " << bonus;
    cout << "\nAdditional service benefit: Rs. " << (years > 5 ? 5000 : 0);
    cout << "\nFinal salary: Rs. " << finalSalary;
    return 0;
}
