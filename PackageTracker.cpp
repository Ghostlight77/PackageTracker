#include "PackageTracker.h"
#include <iostream>
#include <iomanip>

using namespace std;

void displayPackages(const double* weights, int count) {
    cout << "\nPACKAGE SUMMARY\n";
    for (int i = 0; i < count; i++) {
        cout << "Package " << (i + 1) << ": " << fixed << setprecision(2) << weights[i] << " lbs\n";
    }
    cout << endl;
}

double calculateTotal(const double* weights, int count) {
    double total = 0.0;
    for (int i = 0; i < count; i++) {
        total += weights[i];
    }
    return total;
}

double calculateAverage(const double* weights, int count) {
    if (count == 0) return 0.0;
    return calculateTotal(weights, count) / count;
}

double findHeaviest(const double* weights, int count) {
    if (count == 0) return 0.0;
    double heaviest = weights[0];
    for (int i = 1; i < count; i++) {
        if (weights[i] > heaviest) {
            heaviest = weights[i];
        }
    }
    return heaviest;
}
