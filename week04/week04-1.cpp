// week04-1.cpp
// LeetCode 2529. Maximum Count Of Positive Integer And Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg =0; //�w�]��
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                pos++; //����++
            if(nums[i] < 0)
                neg++; //�t��++
        }
        if(pos>neg)
            return pos; //���Ƹ��j
        else
            return neg; //�t�Ƹ��j

    }
}
