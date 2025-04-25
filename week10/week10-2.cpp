/// week10-2.cpp 剝皮法
#include <stdio.h>

int main()
{
    printf("Input a number:");
    int n;
    scanf("%d", &n);
    /// printf("個位數: %d\n", n%10);
    /// printf("十位數: %d\n", n/10 % 10);
    /// printf("百位數: %d\n", n/100 %10);

    while(n>0){ /// 如果還有剩下 n 就繼續做
        printf("數字 %d 剝皮剝出: %d\n", n, n%10); ///剝皮
        n = n/10; /// 數字變小了 變 1/10
    }
}
