class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums){
            result ^=num;
        }
        return result;
    }
};

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i =0; i<nums.size() ; i++ ){
            bool issingle = true;
            for (int j = 0 ; j < nums.size() ; j++){
                if ( i != j  && nums[i] ==nums[j]){
                    issingle = false;
                    break;
                }
            }
            if (issingle){
                return nums[i];
            }
        }
        return 0;
    }
};
*/