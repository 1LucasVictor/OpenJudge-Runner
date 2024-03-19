#include<stdio.h>
int main(){
	int a,b,c,i;
	i=1;
	while(scanf("%d %d",&a,&b)!=EOF){
		c=a+b;
		while(c>=10){
			c/=10;
			i++;
		}
		printf("%d\n",i);
		i=1;
	}
	return 0;
}