#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t number_of_dwarfs = 43;
    uint64_t q1_yes = 34;
    uint64_t q2_yes = 26;
    uint64_t q3_yes = 11;

    if (cin.good()) {
        long long n2, q1, q2, q3;
        if (cin >> n2 >> q1 >> q2 >> q3) {
            number_of_dwarfs = n2;
            q1_yes = q1;
            q2_yes = q2;
            q3_yes = q3;
        }
    }

    //
    // green hats            T F F
    // red hats              T T F
    // orange hats (Lie)     F F F
    // orange hats (Truth)   T T T

    uint64_t orange_hat_dwarfs_always_true = q3_yes;
    uint64_t red_hat_dwarfs = q2_yes - orange_hat_dwarfs_always_true;
    uint64_t green_hat_dwarfs = q1_yes - red_hat_dwarfs - orange_hat_dwarfs_always_true;
    uint64_t orange_hat_dwarfs = number_of_dwarfs - green_hat_dwarfs - red_hat_dwarfs;

    if (orange_hat_dwarfs_always_true < 0 || orange_hat_dwarfs < 0 || green_hat_dwarfs < 0 || red_hat_dwarfs < 0) {
        cout << "Invalid input data\n";
        return 0;
    }
    if (orange_hat_dwarfs + green_hat_dwarfs + red_hat_dwarfs != number_of_dwarfs) {
        cout << "Inconsistent data\n";
        return 0;
    }

    cout << "Dwarfs with orange hats:" << orange_hat_dwarfs << "\n";
    return 0;
}
