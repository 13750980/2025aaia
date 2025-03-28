/// week06-1.cpp
/// YKL07.UVA11461: Square Numbers

#include <stdio.h>
#include <math.h> /// �ƾǮw, �ϥι� sqrt()

int main()
{
	int a,b;
	while(1){ /// �L�a�j��, 1:true; 0:false
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break; /// �p�G a �M b ���O 0, break �Ӳפ�j��
		int aa = sqrt(a), bb = sqrt(b);
		int ans = 0;
		for(int i=aa; i<=bb; i++){
			if(a<=i*i && i*i<=b) ans++;
		}
		printf("%d\n", ans);
	}
}
