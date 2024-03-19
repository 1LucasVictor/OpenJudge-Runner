#include <stdio.h>

int main()
{
    int h,w,i,j;
	char c;
	while(scanf("%d %d", &h, &w)!=EOF && (h!=0 || w!=0)){
		for(i=h;i;i--){
			printf("#");
			c = (i==h || i==1)?'#':'.';
			for(j=w-2;j;j--){
				putchar(c);
			}
			printf("#\n");
		}
		printf("\n");
	}
    return 0;
}