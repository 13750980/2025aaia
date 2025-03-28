/// week06-1.cpp
/// YKL07.UVA11461: Square Numbers

#include <stdio.h>
#include <math.h> /// 數學庫, 使用像 sqrt()

int main()
{
	int a,b;
	while(1){ /// 無窮迴圈, 1:true; 0:false
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break; /// 如果 a 和 b 都是 0, break 來終止迴圈
		int aa = sqrt(a), bb = sqrt(b);
		int ans = 0;
		for(int i=aa; i<=bb; i++){
			if(a<=i*i && i*i<=b) ans++;
		}
		printf("%d\n", ans);
	}
}
