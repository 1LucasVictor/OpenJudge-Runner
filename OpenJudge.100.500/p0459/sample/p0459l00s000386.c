#include<stdio.h>
int main(void)
{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=1;
	if(y%2!=0){
		z=0;
	}
	if(x*2>y||x*4<y){
		z=0;
	}
	if(z==1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}