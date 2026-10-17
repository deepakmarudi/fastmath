#include <vector>
#include <iostream>

double mean(const std::vector<double>& v) {
    double s = 0;
    for (double x : v) s += x;
    return s / v.size();
}

int main() {
    std::cout << mean({}) << "\n";
}