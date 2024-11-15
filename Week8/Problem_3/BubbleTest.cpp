#include <iostream>
#include <vector>
using namespace std;

// Function to perform Bubble Sort (descending)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Test case
    vector<int> testArray = {90, 55, 80, 60, 70, 65, 60};
    vector<int> expectedSortedArray = {90, 80, 70, 65, 60, 60, 55};

    // Perform Bubble Sort
    bubbleSort(testArray);
    bool bubbleCorrect = (testArray == expectedSortedArray);

    // Output the test result
    if (bubbleCorrect) {
        cout << "Bubble Sort Test passed." << endl;
    } else {
        cout << "Bubble Sort Test failed." << endl;
    }

    return 0;
}
