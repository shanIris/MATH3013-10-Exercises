//Exercise 8

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sort_function(double x, double y) {
    return abs(x) < abs(y);
}

int main() {
    using namespace std;
    vector<double> seq = { -9.3, -7.4, -3.8, -0.4, 1.3, 3.9, 5.4,8.2 };
    auto less = [](double x, double y) { return abs(x) < abs(y); };
    sort(begin(seq), end(seq), less);
    sort(begin(seq), end(seq), sort_function);
    for (int i = 0; i < seq.size();i++) {
        cout << seq[i] << " ";
    }
    return 0;
}