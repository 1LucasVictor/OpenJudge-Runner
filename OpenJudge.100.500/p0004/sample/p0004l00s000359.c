#include <stdio.h>

int main(void){
	int a,b,g;
	int x,y;
	while(scanf("%d %d",&a,&b) != EOF){
		if(a > b){
			x=a;y=b;
		}else{
			x=b;y=a;
		}
		while(a != b){
			if(a > b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		printf("%d %d\n",a,x*(y/a));
	}
	return 0;
}