/// week10-2.cpp ��֪k
#include <stdio.h>

int main()
{
    printf("Input a number:");
    int n;
    scanf("%d", &n);
    /// printf("�Ӧ��: %d\n", n%10);
    /// printf("�Q���: %d\n", n/10 % 10);
    /// printf("�ʦ��: %d\n", n/100 %10);

    while(n>0){ /// �p�G�٦��ѤU n �N�~��
        printf("�Ʀr %d ��֭�X: %d\n", n, n%10); ///���
        n = n/10; /// �Ʀr�ܤp�F �� 1/10
    }
}
