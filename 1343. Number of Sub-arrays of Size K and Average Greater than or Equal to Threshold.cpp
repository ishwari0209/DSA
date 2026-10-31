#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {2, 2, 2, 2, 5, 5, 5, 8};

    int k = 3;
    int low = 0, high = k;

    double sum = 0, maxsum, avg;
    int theresold=4,count=0;
    // Calculate the first window sum
    for (int i = 0; i < k; i++) {
        sum += vec[i];
    }
    avg=sum/k;
        if(avg>=theresold)
        {
            count++;
        }
    // Slide the window
    while (high < vec.size()) {
       
        sum = sum - vec[low];
        sum = sum + vec[high];

        low++;
        high++;
       
        avg=sum/k;
        if(avg>=theresold)
        {
            count++;
        }

    }

    
    cout << "Maximum Average: " << count << endl;

    return 0;
}