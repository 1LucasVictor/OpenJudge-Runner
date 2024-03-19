#include<stdio.h>
int main(void)
{	int a,b;
	int i=0;
	scanf("%d%d",&a,&b);
	
	if(a==0||b==0)
	puts("IMPOSSIBLE");
	
	else{
		while(a!=-b){
			a--;
			b--;
			i++;
		}
		printf("%d",i);
	}
	
	

	return 0;
}
		