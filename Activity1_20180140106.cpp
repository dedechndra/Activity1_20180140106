#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r) {
    if (r >= 60) {
        return "lulus";
    }
    else {
        return "gagal";
    }
}
