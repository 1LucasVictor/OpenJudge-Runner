#include <stdio.h>

int main(void)
{
	int a,b,c,num,i;
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %d %d",&a,&b,&c);
		
		if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}