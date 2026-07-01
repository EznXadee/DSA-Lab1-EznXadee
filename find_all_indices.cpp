#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }

    return indices;
}

void displayIndices(const vector<int>& indices) {
    if (indices.empty()) {
        cout << "Key not found." << endl;
        return;
    }

    for (int index : indices) {
        cout << index << " ";
    }

    cout << endl;
}

int main() {
    vector<int> arr1 = {4, 2, 7, 2, 9, 2};
    displayIndices(findAllIndices(arr1, 2));

    vector<int> arr2 = {1, 3, 5, 7};
    displayIndices(findAllIndices(arr2, 4));

    vector<int> arr3;
    displayIndices(findAllIndices(arr3, 10));

    return 0;
}