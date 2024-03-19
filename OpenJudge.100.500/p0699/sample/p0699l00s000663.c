#include<stdio.h>
int main(void)
{
	int n,x,y,i;
	x=0;
	y=0;
	for(i=0;i<3;i++){
		scanf("%d",&n);
		if(n==5) x=x+1;
		else y=y+1;
	}
	if(x==2 && y==1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
	return 0;
}
