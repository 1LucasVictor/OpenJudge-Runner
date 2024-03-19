#include <stdio.h>

int main(){

	int h,a;
	scanf("%d%d",&h,&a);
	h%a==0?printf("%d\n",h/a):printf("%d", (h/a)+1);
return 0;
}