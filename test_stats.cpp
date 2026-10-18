#include "stats.h"
#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    if(mean({2, 5, 6}) != 4.0) {
        std::cerr << "FAIL: mean of 2, 4, 6\n";
        return 1;
    }
    if(std::isnan(mean({}))) {
        std::cerr << "FAIL: empty vector gave NaN\n";
        return 1;
    }
}