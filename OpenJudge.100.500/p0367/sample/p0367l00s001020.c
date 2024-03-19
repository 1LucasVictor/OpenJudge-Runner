#include <stdio.h>

int main(void) {
	
int a,b,c,x;
int count;
scanf("%d %d %d\n",&a,&b,&c);
for(x=a,count=0;x<=b;x++){
if(c%x==0) count ++;
}
printf("%d\n",count);

	return 0;
}