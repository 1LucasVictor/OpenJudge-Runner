#include<stdio.h>
int main(void)
{
	int a,b,c,s,i;
	s=1;
	while(scanf("%d %d",&a,&b)!=EOF){
		 c=a+b;
		 s=1;
		 i=10;
		 while(c>=10){	
               s=s+1;
			   c=c/10;
		 }
		 printf("%d\n",s);
	}
	return 0;
}
