class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int myxor = 0;
        for(int i = 0; i < nums.size(); i++){
            myxor = myxor ^ nums[i];
            myxor = myxor ^ i;
        }
        myxor = myxor ^ nums.size();
        return myxor;
    }
};
