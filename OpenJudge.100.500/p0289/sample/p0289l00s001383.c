#include<stdio.h>

int main(){
	int x,y,tmp;
	scanf("%d %d",&x,&y);
	
	while(x%y!=0){
		tmp=x%y;
		x=y;
		y=tmp;
	}
	
	printf("%d\n",y);
	
	
	return 0;
}