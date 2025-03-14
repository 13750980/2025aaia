// week04-1.cpp
// LeetCode 2529. Maximum Count Of Positive Integer And Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg =0; //箇砞
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                pos++; //タ计++
            if(nums[i] < 0)
                neg++; //璽计++
        }
        if(pos>neg)
            return pos; //タ计耕
        else
            return neg; //璽计耕

    }
}
