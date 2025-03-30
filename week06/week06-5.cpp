/// SOIT06_Base_008
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<b){ ///因爲可能a大，b小，所以用if()分兩種迴圈
		for(int i=a; i<=b; i++){
			if(i%5==0) printf("%d\n", i);
		}
	}else{
		for(int i=b; i<=a; i++){
			if(i%5==0) printf("%d\n", i);
		}
	}
}
