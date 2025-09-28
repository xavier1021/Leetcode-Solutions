class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //重新排序．尾部最大
        for(int i =nums.size()-1 ; i >=2; i--){
            int a = nums[i], b =nums[i-1] , c = nums[i-2];
            if (b+c >a) return a+b+c; // 兩邊加起來大於最長的
        }
        return 0;
    }
};