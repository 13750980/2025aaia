// week04-1.cpp
// LeetCode 2529. Maximum Count Of Positive Integer And Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg =0; //預設值
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                pos++; //正數++
            if(nums[i] < 0)
                neg++; //負數++
        }
        if(pos>neg)
            return pos; //正數較大
        else
            return neg; //負數較大

    }
}
