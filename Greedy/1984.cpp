class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //先排序
        if(k<=1) return 0;
        int ans = INT_MAX; //預設一個最大的值慢慢縮小
        for (int i=0; i+k-1<=nums.size()-1; i++){ //因為已經排序過了，就直接可以找連續的數值
            ans= min(ans, nums[i+k-1]-nums[i]); //在連續排列好的數值中，可以直接把最大的減掉最小的
        }
        return ans;
    }
};