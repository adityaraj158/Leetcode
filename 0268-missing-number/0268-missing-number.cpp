class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int xorVal = 0;

        for (int i = 0; i < n; i++) {
            xorVal ^= arr[i];   // XOR with array element
            xorVal ^= i;        // XOR with index
        }

        xorVal ^= n;  // XOR with last number (n)

        return xorVal;
    }
};
