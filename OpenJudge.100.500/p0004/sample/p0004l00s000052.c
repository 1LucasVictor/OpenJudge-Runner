#include <stdio.h>

int main(void){
	int a,b,c,d;
	int i,j,temp;

	while(scanf("%d %d",&a,&b)!=EOF){
		c = a;
		d = b;
		for(i = 1,j = 1;1;){
			if(a*j>b*i){
				i++;
			}else if(a*j<b*i){
				j++;
			}else if(a*j == b*i){
				break;
			}
			
		}


		for(;1;){
			if(c % d != 0){
				temp = c%d;
				c = d;
				d = temp;
			}else{
				break;
			}
		}
		printf("%d %d\n",d,a*j);
	}
	return 0;
}