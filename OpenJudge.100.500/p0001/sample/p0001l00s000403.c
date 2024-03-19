#include<stdio.h>
int main(void){
    int a,b,c,i;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        i=0;
        c = a+b;
        while(c!=0)
        {
            c = c/10;
            i++;
        }
        printf("%d\n",i);
    }
	return 0;
 }