#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 12, -5, -6, 50, 3};

    int k = 4;
    int low = 0, high = k;

    double sum = 0, maxsum, avg;

    // Calculate the first window sum
    for (int i = 0; i < k; i++) {
        sum += vec[i];
    }

    maxsum = sum;

    // Slide the window
    while (high < vec.size()) {
        sum = sum - vec[low];
        sum = sum + vec[high];

        low++;
        high++;

        maxsum = max(sum, maxsum);
    }

    avg = maxsum / k;

    cout << "Maximum Average: " << avg << endl;

    return 0;
}