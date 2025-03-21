/// week05-5.cpp
/// LeetCode 3191. Minimum Operations to Make Binary Array Elements Equal to OneI
/// 想把 nums 裡的數， 每次，<切換3個相鄰的數> 0 與 1 互換，要做幾次 <3個數翻牌> 才能全部變成 1
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0; /// 要 <翻牌翻幾次>
        for(int i=0; i<nums.size()-2; i++) {
            if(nums[i] == 0){
                nums[i] = 1;
                nums[i+1] = 1 - nums[i+1];
                nums[i+2] = 1 - nums[i+2];
                ans++; /// 翻一次
            }
        }
        int n = nums.size();
        if(nums[n-1]==0 || nums[n-2]==0)
            return -1;
        return ans;
    }
};
