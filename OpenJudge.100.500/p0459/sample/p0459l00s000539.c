#include<stdio.h>
int main(void)
{
	int x,y,z,i;
	scanf("%d %d",&x,&y);
	z=1;
	if(y%2!=0){
		z=0;
	}
	if(y%4==0){
		y=y/4;
	}
	if(y%2==0){
		y=y/2;
		z=1;
	}
	else{
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