class Solution {
public:
    int missingNumber(vector<int>& arr) {
        long long n = arr.size();  // size of array
        long long expectedSum = (n * (n + 1)) / 2;  // sum of 0...n
        long long actualSum = 0;

        for (int i = 0; i < n; i++) {
            actualSum += arr[i];
        }

        return expectedSum - actualSum;  
    }
};