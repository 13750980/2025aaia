/// week04-3.cpp
/// �զU�� for �j��

#include <stdio.h>

int main()
{
    int n = 5;
    for(int i=0; i<n; i++){
        printf("%d ", i);
    }///�q���q 0 �}�l
    printf("\n");

    for(int i=1; i<=n; i++){
        printf("%d ", i);
    } ///�H���q 1 �}�l
    printf("\n");

    for(int i=n; i>=0; i--){
        printf("%d ", i);
    } ///�˹L�Ӫ��j��
}

