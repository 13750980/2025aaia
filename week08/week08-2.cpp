/// week08-2.cpp 百數排序(下周考試)
#include <stdio.h>

int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<99; j++){
		for(int i=0; i<99; i++){
			if(a[i] > a[i+1]){
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for(int i=0; i<100; i++){
		printf("%d ", a[i]);
	}
}
