#include <stdio.h>

int main(void)
{
	int x,y;
	int i;
	int temp;
	int a=0;
	scanf("%d%d",&x,&y);
	if(x<y){
		temp=y;
	}else{
		temp=x;
		
	}
	//printf("a");
	if(x>y){
	for(i=1;i<=temp;i++){
		if(y%i==0&&(x%y)%i==0){
			
			a=i;
			
		}
	}
	}else{
		
		for(i=1;i<=temp;i++){
		if(x%i==0&&(y%x)%i==0){
			
			a=i;
			
		}
	}
		
		
		
		
	}
	printf("%d\n",a);
	return 0;
}
