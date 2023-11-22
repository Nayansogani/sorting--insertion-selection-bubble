#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && v[j - 1] > v[j]) {
            swap(v[j - 1], v[j]);
            j--;
        }
    }
}

void bubble_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selection_sort(vector<int>& v) {
    int n = v.size();
    int mini;
    for (int i = 0; i < n - 1; i++) {
        mini = i;
        for (int j = i; j < n; j++) {
            if (v[j] < v[mini]) {
                mini = j;
            }
        }
        swap(v[mini], v[i]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> v[i];
    }

    insertion_sort(v);
    cout << "Array after sorting using insertion sort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    // Similar code for bubble_sort and selection_sort if needed

    return 0;
}
