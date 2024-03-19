#include<stdio.h>
int main(void)
{
	int	i,j,x,y,z,tmp;
	scanf("%d %d %d\n",&x,&y,&z);
	for(i=0;i<3;i++){
		if(x>y){
			tmp=y;
			y=x;
			x=tmp;
		}else if(y>z){
			tmp=z;
			z=y;
			y=tmp;
		}
	}
	printf("%d %d %d\n",x,y,z);
}