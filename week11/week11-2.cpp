/// week11-2.cpp
/// ���F�ѨM SOIT107_ADVANCE_009 �D��
/// �Ʋ� "��֪k"
#include <stdio.h>

int main()
{
    printf("�п�J 1 �ӼƦr(ex. 183): ");
    int n;
    scanf("%d", &n); /// Ū�J n
    int ans = 0; /// �Q��� "�̤j����"
    while(n>0){ /// while�j��, �@�����
        if(n%10 > ans) ans = n%10; /// ��j����, ��s����
        printf("��� %d\n", n%10);
        n = n/10; /// �駹��, n �ܤp
    }
    printf("�̤j���֬O %d\n", ans);
}
