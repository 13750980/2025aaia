/// week05-1.cpp
/// 主題：陣列 Array 配合 for 迴圈

#include <stdio.h>

int main()
{///陣列宣告 4 格, 裡面初始化 4 個值 大括號
    int a[4] = {10, 20, 30, 40};
    for(int i=0; i<4; i++){
        printf("%d ", a[i]);
    }///電腦的 for 迴圈, 從 0 開始
    printf("\n"); ///跳行

    a[0] = 99; ///把 a[0] 值 換成 "99"
    for(int i=0; i<4; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
