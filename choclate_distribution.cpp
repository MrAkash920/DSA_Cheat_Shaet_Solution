//https://www.geeksforgeeks.org/chocolate-distribution-problem/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int choclate_dist(vector <int> &arr, int n, int m){
    if(n < m){
        return -1;
    }
    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX;
    for(int i = 0; i + m - 1 < n; i++){
        int diff =  arr[i + m -1] - arr[i];
        if(diff < min_diff){
            min_diff = diff;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int m;
    cin >> m;
    cout << choclate_dist(arr, n, m);
    return 0;
}