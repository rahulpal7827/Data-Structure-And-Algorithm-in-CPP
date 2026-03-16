#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& a, int key) {
    int start = 0;
    int end = a.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; 

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a(5);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int idx = BinarySearch(a, key);
    cout << "The index of " << key << " is " << idx;
    return 0;
}