#include<stdio.h>

int main(void){
	int a,b,c,i,j;
	i=0;
	while(scanf("%d %d",&a,&b)!=EOF&&i<200){
		c=a+b;
		j=0;
		while(c>0){
			c/=10;
			j++;
		}
		printf("%d\n",j);
		i++;
	}
	return 0;
}