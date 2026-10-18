#include "stats.h"
double mean(const std::vector<double>& v) {
    if(v.size() == 0) return 0;
    double s = 0;
    for (double x : v) s += x;
    return s / v.size();
}