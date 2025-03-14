/// week04-3.cpp
/// 試各種 for 迴圈

#include <stdio.h>

int main()
{
    int n = 5;
    for(int i=0; i<n; i++){
        printf("%d ", i);
    }///電腦從 0 開始
    printf("\n");

    for(int i=1; i<=n; i++){
        printf("%d ", i);
    } ///人類從 1 開始
    printf("\n");

    for(int i=n; i>=0; i--){
        printf("%d ", i);
    } ///倒過來的迴圈
}

