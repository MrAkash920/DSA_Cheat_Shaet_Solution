//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum is: " << max << " " << "Minimum is: " << min << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum is: " << max << " " << "Minimum is: " << min << endl;
    return 0;
}
