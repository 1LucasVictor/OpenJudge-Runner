#include <stdio.h>

int main(void){
	int a,b,sum,ans,i;

	while(scanf("%d %d",&a,&b)!=EOF){
		sum = a+b;
		ans = 0;
		i = 0;
		for(i=0; sum>0; i++){
			sum = sum / 10;
			
		}
	printf("%d\n", i);
	}
	
	return 0;

}
