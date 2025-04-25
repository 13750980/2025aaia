/// week10-3.cpp 反序數字
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int ans = 0, b = n; /// b 是 n 的備份
	while(n>0){
		ans = ans * 10 + n%10;
		n = n/10;
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}
