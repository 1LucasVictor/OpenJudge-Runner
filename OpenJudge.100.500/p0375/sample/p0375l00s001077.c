#include<stdio.h>
	int main(void)
{
	int x, i, a=0;
	scanf("%d", &x);
	for(i=1;i<=x;i++)
	{
		if(i%3==0){
	 printf(" %d",i);
		} 
		else{
			if(i%10==3){
			printf(" %d",i);
			}	
		else{
			a = i;
			while(a!=0){
				if(a%10!=3){
					a = a/10;
				}
				else{
					printf(" %d",i);
				break;
				}
			}
		}
	}
	}
	printf("\n");
	return 0;
}
