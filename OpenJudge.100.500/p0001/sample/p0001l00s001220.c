#include <stdio.h>
int a=0;
int b=0;
int c=0;
int m,i;
int main(){
	while(1){
		m = scanf("%d%d",&a,&b);
		if(m == EOF) return 0;
		c = a+b;
		i = 0;
		if(c==0){
			i=1;
			printf("0\n");
			continue;
		}
		while(1){
			if(c==0)break;
			c = c / 10;
			i++;
			
		}
		printf("%d\n",i);
	}
	return 0;
}