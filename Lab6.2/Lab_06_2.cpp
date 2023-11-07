#include <iostream>
#include <iomanip>

using namespace std;

double AverageEvenIndexedElements(int a[], int n) {
    if (n == 0) {
        return 0;
    }

    double sum = 0;
    int count = 0;

    for (int i = 0; i < n; i += 2) {
        sum += a[i];
        count++;
    }

    if (count == 0) {
        return 0;
    }

    return round(sum / count);
}

void print(int* a, const int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << setw(4);
        if ((i + 1) % 12 == 0) { 
            cout << setw(4) << endl;
        }
    }
}

int main() {
    int a[] = { 10, 5, 30, -5, 15, 8, 19, 22, 14, -12, 0, -9, 11 };
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Array:" << endl;
    print(a, n);

    double result = AverageEvenIndexedElements(a, n);

    cout << "Average of elements with even indices: " << result << endl;

    return 0;
}