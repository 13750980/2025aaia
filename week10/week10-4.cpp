/// week10-4.cpp
/// LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {}; /// Ҫ�� total ���F�״� (�Á�yӋ total ���F�Δ�)
        int largest = 0; /// ӛ�[������һȺ] �e���Ўׂ���?
        for(int i=1; i<=n; i++){ /// 1...n ���ޒȦ
            int now = i; /// �F��Ҫ��Ƥ�Ĕ���
            int total = 0; /// ޒȦǰ�� total �� 0
            while(now > 0){ /// ��Ƥ��
                /// ޒȦ��, �� total һֱ������
                total += now % 10; /// ��Ƥ now % 10 ��ÿһλ��, �ӵ� total �e
                now = now / 10; /// ��Ƥ��, now ׃С��
            }
            a[total]++;/// ޒȦ����, Ҫ�yӋ total �ĳ��F�Δ�
            if(a[total] > largest) largest = a[total];
        }
        int ans = 0; /// ���Ĕ�����ЩȺ, �Ў�Ⱥ?
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++; /// ��� a[i] �����Ĕ�����Ⱥ, �Ͷ� 1 Ⱥ
        }
        return ans;
    }
};
