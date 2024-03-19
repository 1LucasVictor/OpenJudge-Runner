#include<stdio.h>
int main(void)
{
	int n,w,x,z;
	scanf("%d",&n);
	w=0; x=0; z=0;
	w=n/100;
	x=(n%100)/10;
	z=n%10;
	if(w==7||x==7||z==7){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}