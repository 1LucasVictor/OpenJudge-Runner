#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    c=c-a+b;
    if(c>=0){
		printf("%d",c);
	}
    else{
		printf("0");
	}
    return 0;
}