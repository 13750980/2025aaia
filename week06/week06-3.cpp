/// week06-3.cpp
/// LeetCode 1780 Check if Number is a Sum of Powers of Three
/// �D�جݦ���, ���{��²��, �u�n while �M if
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){ /// �u�nn�٦��Ʀr, �N�R��3������
            /// n%3 �|�ѤU? �� 1 good, 0 good, 2 no good
            if(n%3==2) return false;
            n = n / 3; /// �R�� 3 ������
        }
        return true;
    }
};
