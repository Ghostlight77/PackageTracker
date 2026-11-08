#ifndef WARNE_PACKAGE_TRACKER_H
#define WARNE_PACKAGE_TRACKER_H

void displayPackages(const double* weights, int count);
double calculateTotal(const double* weights, int count);
double calculateAverage(const double* weights, int count);
double findHeaviest(const double* weights, int count);

#endif
