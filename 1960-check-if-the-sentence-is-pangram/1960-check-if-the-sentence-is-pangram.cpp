class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        
        for(int i=0;i<sentence.length();i++){
            int j = sentence[i] - 'a';
            arr[j]++;
        }
        
        for(int j=0;j<arr.size();j++){
            if(arr[j] == 0){
                return false;
            }
        }
        return true;
    }
};
