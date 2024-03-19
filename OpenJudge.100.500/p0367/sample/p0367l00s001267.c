#include<stdio.h>
int main(void)
{
	int a,b,c,i,j,cd;
	
	scanf("%d %d %d",&a,&b,&c);
	
	j = 0;
	
	for(i=a;i<=b+1;i++){
		
		cd = c%i;
		
		if(cd==0){
			j = j+1;
		}
	}
	
	printf("%d\n",j);
	
	return 0;
}
