#include <iostream>
using namespace std;

int main() {
    int age, employmentYears, creditScore;
    double salary, installments;

    cout << "Enter applicant age: ";
    cin >> age;
    cout << "Enter monthly salary (Rs.): ";
    cin >> salary;
    cout << "Enter employment duration in years: ";
    cin >> employmentYears;
    cout << "Enter existing monthly loan installments (Rs.): ";
    cin >> installments;
    cout << "Enter credit score: ";
    cin >> creditScore;

    if (age < 0 || salary < 0 || employmentYears < 0 || installments < 0 || creditScore < 0) {
        cout << "Invalid input.";
    } else if (creditScore < 600) {
        cout << "Loan Rejected: Credit score is below 600.";
    } else if (age < 21) {
        cout << "Loan Rejected: Minimum age requirement is 21.";
    } else if (salary < 50000) {
        cout << "Loan Rejected: Salary is below Rs. 50,000.";
    } else if (employmentYears < 2) {
        cout << "Loan Rejected: Employment duration is below 2 years.";
    } else if (installments > salary * 0.40) {
        cout << "Loan Rejected: Existing installments exceed 40% of salary.";
    } else if (salary > 150000 && employmentYears > 5) {
        cout << "Loan Approved under Premium Loan Category.";
    } else {
        cout << "Loan Approved under Regular Loan Category.";
    }
    return 0;
}
