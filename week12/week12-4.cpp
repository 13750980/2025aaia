/// week12-4.cpp
/// �Ψ禡�I�s�禡, �ѥX Fibonacci
#include <stdio.h>

int fib(int n) /// �禡
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);  /// �e�@�� + ��@��
}

int main()
{
    printf("�п�J�Ʀr: ");
    int n;
    scanf("%d", &n);

    printf("���׬O: %d\n", fib(n)); /// �I�s�禡

}
