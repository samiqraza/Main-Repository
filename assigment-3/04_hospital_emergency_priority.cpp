#include <iostream>
using namespace std;

int main() {
    int age, heartRate;
    double temperature, oxygen;

    cout << "Enter patient age: ";
    cin >> age;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;
    cout << "Enter oxygen level (%): ";
    cin >> oxygen;
    cout << "Enter heart rate (beats per minute): ";
    cin >> heartRate;

    if (age < 0 || temperature < 0 || oxygen < 0 || oxygen > 100 || heartRate < 0) {
        cout << "Invalid patient information.";
    } else if (oxygen < 90 || heartRate > 130 || heartRate < 45) {
        cout << "Category: Critical";
        cout << "\nPriority: Immediate emergency attention.";
    } else if (age > 65 && temperature > 102) {
        cout << "Category: High Priority";
        cout << "\nPriority: Urgent medical assessment.";
    } else if (oxygen >= 90 && oxygen <= 94) {
        cout << "Category: Moderate";
        cout << "\nPriority: Medical assessment required.";
    } else {
        cout << "Category: Normal";
        cout << "\nPriority: Routine assessment.";
    }
    return 0;
}
