class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        for(char i:sentence){
            int j=i-'a';
            arr[j]++;
        }
        for(int &count:arr){
            if(count==0){
                return false;
            }
        }
        return true;
    }
};