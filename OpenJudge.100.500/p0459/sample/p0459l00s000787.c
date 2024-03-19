#include <stdio.h>
int main(void){
	int X,Y,i,j,a,b,ab ,flag;
	scanf("%d %d",&X,&Y);
	flag=0;
	i=X;
	j=0;
	while(i>-1){
		ab=0;
		a=0;
		b=0;
		a=2*i;
		b=4*j;
		ab=a+b;
		if(ab==Y)flag=1;
		i=i-1;
		j=j+1;
	}
	if(flag==0)printf("No");
	if(flag==1)printf("Yes");
	return 0;
}
