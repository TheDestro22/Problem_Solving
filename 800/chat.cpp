#include <iostream>
using namespace std;

int longest_common_subsegment_length(int x, int y) {
    int z = x ^ y;
    if (z == 0) {
        return 1; // Edge case when z is 0, longest common subsegment is 1
    }
    int highest_bit_set_position = 31;
    while ((z & (1 << highest_bit_set_position)) == 0) {
        highest_bit_set_position--; // Find highest bit set position
    }
    return 1 << highest_bit_set_position; // Calculate 2 raised to the power of highest_bit_set_position
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    // Process each test case
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << longest_common_subsegment_length(x, y) << endl;
    }

    return 0;
}
