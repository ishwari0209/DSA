
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int i = 0;
    int j = 1;
    int profit = 0;
    int maxProfit = 0;

    while (j < prices.size()) {
        if (prices[i] < prices[j]) {
            profit = prices[j] - prices[i];
            maxProfit = max(maxProfit, profit);
        } else {
            i = j;
        }

        j++;
    }

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
