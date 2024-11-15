#include <iostream>
#include <vector>
using namespace std;

// Function to perform Insertion Sort (descending)
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    // Test case
    vector<int> testArray = {90, 55, 80, 60, 70, 65, 60};
    vector<int> expectedSortedArray = {90, 80, 70, 65, 60, 60, 55};

    // Perform Insertion Sort
    insertionSort(testArray);
    bool insertionCorrect = (testArray == expectedSortedArray);

    // Output the test result
    if (insertionCorrect) {
        cout << "Insertion Sort Test passed." << endl;
    } else {
        cout << "Insertion Sort Test failed." << endl;
    }

    return 0;
}
