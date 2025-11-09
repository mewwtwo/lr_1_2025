#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <format>

using namespace std;

double f(double x) {
    return sin(9.0 / 46.0) + 12 * M_PI
         - 56 * M_E * (5.0 / ((x + 10) * (x - 6)))
         + 14 * cos(x - 3) + sqrt(x - 15);
}

// Check if x belongs to the domain
bool in_domain(double x) {
    return (x >= 15.0) && (x != -10.0) && (x != 6.0);
}

void print_startup_msg() {
    cout << "Author: Demchuk Dmytro." << endl;
    cout << "Variant 79: calculate value of the given expression for a real x." << endl;
}

// Get user input and handle invalid values
bool input_values(double& x) {
    cout << "Enter x (!=6, !=-10, >=15): ";
    cin >> x;
    return !cin.fail();
}

// Print formatted results
void output_values(double x, double result, bool correct) {
    cout << format("for x = {:.7f}\n", x);
    if (correct)
        cout << format("result = {:.8f}\n", result);
    else
        cout << "result = undefined" << endl;
}

int main() {
    print_startup_msg();

    double x;

    if (input_values(x)) {
        cout << "\n***** do calculations ... ";
        double result = f(x);
        cout << "done" << endl;

        output_values(x, result, in_domain(x));
    }
    else
        cout << "wrong input" << endl;

    return 0;
}