/// week10-4.cpp
/// LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {}; /// 要放 total 出現幾次 (用來統計 total 出現次數)
        int largest = 0; /// 記錄[最大的那一群] 裡面有幾個數?
        for(int i=1; i<=n; i++){ /// 1...n 人類的迴圈
            int now = i; /// 現在要剝皮的數字
            int total = 0; /// 迴圈前面 total 是 0
            while(now > 0){ /// 剝皮法
                /// 迴圈哩, 把 total 一直加起來
                total += now % 10; /// 剝皮 now % 10 把每一位數, 加到 total 裡
                now = now / 10; /// 剝皮後, now 變小了
            }
            a[total]++;/// 迴圈後面, 要統計 total 的出現次數
            if(a[total] > largest) largest = a[total];
        }
        int ans = 0; /// 最大的數的那些群, 有幾群?
        for(int i=0; i<100; i++){
            if(a[i]==largest) ans++; /// 如果 a[i] 是最大的數的那群, 就多 1 群
        }
        return ans;
    }
};
