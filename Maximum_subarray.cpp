#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for(int i = 1 ; i < nums.size(); i++){
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << maxSubArray(nums);
    return 0;
}