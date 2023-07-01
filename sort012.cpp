#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sort012(vector <int> &a, int n){
    int start = 0 , mid = 0; int end = n-1;
    while(mid <= end){
        if(a[mid] == 0){
            swap(a[start], a[mid]);
            start++;
            mid++;
        }
        else if(a[mid]== 1){
            mid++;
        }
        else{
            swap(a[mid], a[end]);
            end--;
        }
        
    }
}
int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort012(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}