class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums){ 
            result ^=num;  //用xor去做運算
        }
        return result;
    }
};

/*
暴力解，一個一個比對
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i =0; i<nums.size() ; i++ ){
            bool issingle = true; 預設目前的數字是single
            for (int j = 0 ; j < nums.size() ; j++){
                if ( i != j  && nums[i] ==nums[j]){  如果目前的index不同且值一樣
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