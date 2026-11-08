#include <iostream>
#include <iomanip>
#include "PackageTracker.h"

using namespace std;

int main() {
    int numPackages = 0;

    while (true) {
        cout << "How many packages? ";
        if (cin >> numPackages && numPackages > 0) {
            break;
        }
        cout << "Invalid input. Number of packages must be greater than zero.\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << endl;

    double* weights = new double[numPackages];

    for (int i = 0; i < numPackages; i++) {
        while (true) {
            cout << "Enter weight for package " << (i + 1) << ": ";
            if (cin >> weights[i] && weights[i] > 0) {
                break;
            }
            cout << "Invalid weight. Please enter a value greater than zero.\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    displayPackages(weights, numPackages);

    double total = calculateTotal(weights, numPackages);
    double average = calculateAverage(weights, numPackages);
    double heaviest = findHeaviest(weights, numPackages);

    cout << "Total Weight: " << fixed << setprecision(2) << total << " lbs\n";
    cout << "Average Weight: " << average << " lbs\n";
    cout << "Heaviest Package: " << heaviest << " lbs\n";

    delete[] weights;

    return 0;
}
