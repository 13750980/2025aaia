/// week10-3.cpp �ϧǼƦr
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0, b = n; /// b �O n ���ƥ�
	while(n>0){
		ans = ans * 10 + n%10;
		n = n/10;
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}
