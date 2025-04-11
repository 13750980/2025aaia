/// week08-3.cpp
/// LeetCode 2843. Count Symmetic Integers
/// �q low ... high ���Ʀr��, ���"���@�b"�����`�M == �k���`�M
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0; /// �j��e�� ans = 0
        for (int i = low; i <= high; i++) {
            int a = i / 1000;     /// �d���
            int b = i / 100 % 10; /// �ʦ��
            int c = i / 10 % 10;  /// �Q���
            int d = i % 10;       /// �Ӧ��
            if (11 <= i && i <= 99 && c == d)
                ans++; /// �G���
            if (1000 <= i && i <= 9999 && a + b == c + d)
                ans++; /// �|���
        } /// �j�餤�� ans++
        return ans;
    }
};
