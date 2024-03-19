#include<stdio.h>
int main(void)
{
	int a,b,c,i,j,div=0;
	scanf("%d %d %d",&a,&b,&c);
	
	for(i=1;i<c;i++){
		if(c%i==0){
			for(j=a;j<=b;j++){
				if(i==j){
					div++;
				}
			}
		}
	}
	
	printf("%d\n",div);
	
				
		
	return 0;
}