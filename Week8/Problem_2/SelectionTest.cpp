#include <iostream>
#include <vector>
using namespace std;

// Function to perform Selection Sort (descending)
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(arr[i], arr[maxIdx]);
    }
}

int main() {
    // Test case
    vector<int> testArray = {90, 55, 80, 60, 70, 65, 60};
    vector<int> expectedSortedArray = {90, 80, 70, 65, 60, 60, 55};

    // Perform Selection Sort
    selectionSort(testArray);
    bool selectionCorrect = (testArray == expectedSortedArray);

    // Output the test result
    if (selectionCorrect) {
        cout << "Selection Sort Test passed." << endl;
    } else {
        cout << "Selection Sort Test failed." << endl;
    }

    return 0;
}
