/// week06-3.cpp
/// LeetCode 1780 Check if Number is a Sum of Powers of Three
/// 題目看似難, 但程式簡單, 只要 while 和 if
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){ /// 只要n還有數字, 就刪掉3的倍數
            /// n%3 會剩下? 剩 1 good, 0 good, 2 no good
            if(n%3==2) return false;
            n = n / 3; /// 刪掉 3 的倍數
        }
        return true;
    }
};
